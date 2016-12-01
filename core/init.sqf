#include "..\script_macros.hpp"
disableSerialization;
/*
	File: init.sqf

	Author: Amnart
	Date: 2015-12-30 21:11:30
	Last Modified by: Amnart
	Last Modified time: 2015-12-31 20:50:57
*/
scopeName "A3L_CLIENT_INIT";

//--- Start loading screen (this disables rendering, so the script engine can run faster.)
startLoadingScreen [ "", "Life_RscDisplayLoading" ];

//--- Set initial loading text
[ "Starting A3L Client", "Please wait..." ] call life_fnc_setLoadingText;

//--- Load configuration
[ "Starting A3L Client", "Loading Configuration..." ] call life_fnc_setLoadingText;
if !( isServer ) then { [ ] call compile PreprocessFileLineNumbers "core\configuration.sqf"; };

//--- This is the first spawn
life_firstSpawn = true;
life_session_completed = false;

//--- Custom GUI menu colours
profileNamespace setVariable ["GUI_BCG_RGB_R", 0.85];
profileNamespace setVariable ["GUI_BCG_RGB_G", 0.05];
profileNamespace setVariable ["GUI_BCG_RGB_B", 0.05];
profileNamespace setVariable ["GUI_BCG_RGB_A", 0.8];

//--- Save the changes to the profileNamesace
saveProfileNamespace;

//--- Wait till the player is ready
waitUntil {!isNull player && player == player};
[] call compile PreprocessFileLineNumbers "core\clientValidator.sqf";

//--- Disable some features of the ArmA engine.
enableRadio false; //--- Radio messages
enableSentences false; //--- Radio messages
enableEnvironment true; //--- Environment //DEFAULT ON, NDJ 08/09/16
disableRemoteSensors true; //--- Raycasting

//--- Gang Leaders
waitUntil {(!isNil {TON_fnc_clientGangLeader})};

//--- Compile list of all vehicles
private _vehicles = allMissionObjects "Car";
_vehicles append allMissionObjects "Air";
_vehicles append allMissionObjects "Boat";

//--- Get count of all vehicles
private _vehicleCount = count _vehicles;

//--- Load each vehicle's texture.
{

	private _vehicle = _x;

	[ "Skinning Vehicles", format[ "Vehicle %1/%2", _forEachIndex + 1, _vehicleCount ] ] call life_fnc_setLoadingText;

	//--- Fetch variable from vehicle
	private _textureIndex = _vehicle getVariable "life_veh_color";

	//--- If the variable exists, then setup the vehicle.
	if !( isNil '_textureIndex' ) then {

		//--- Setup vehicle
		[ _vehicle, _textureIndex ] call life_fnc_colorVehicle;

	};


		//--- Load keys if the vehicle is the player's, but first ensure that the side is the player's side.
		if ( _vehicle getVariable [ "side", sideUnknown ] == playerSide ) then {

			//--- Get the owners of the vehicle
			private _owners = _vehicle getVariable [ "vehicle_info_owners", [ ] ];
			private _myUID = getPlayerUID player;

			//--- Loop over owners
			{

				_x params [
					[ "_uid", "", [ "" ] ]
				];

				//--- Am I one of the owners?
				if ( _uid == _myUID ) then {

					//--- Add it to my keychain
					life_vehicles pushBack _vehicle

				};

			} forEach _owners;

		};

	} forEach _vehicles;

//--- Setup Player Skins
{
	if (_x != player) then {
		[_x, false] call life_fnc_HandleUniforms;
	};
} forEach allPlayers;

//Set bank amount for new players
switch (playerSide) do {
	case west: {
		BANK = LIFE_SETTINGS(getNumber,"bank_cop");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
	};
	case civilian: {
		BANK = LIFE_SETTINGS(getNumber,"bank_civ");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
	};
	case independent: {
		BANK = LIFE_SETTINGS(getNumber,"bank_med");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
	};
};

//--- Disable player damage
player allowDamage false;

//--- Setup Pre-Session Player Variables
[ "Setting up player", "Setting player variables..." ] call life_fnc_setLoadingText;
{

	player setVariable _x

} forEach [

	[ "realname", profileName, true ],
	[ "BIS_noCoreConversations", true, false ],
	[ "steam64ID", getPlayerUID player, true ],
	[ "steamname", profileNameSteam, true ]

];

//--- Disable Fatigue
player enableFatigue false;

//--- Setup event handlers
[ "Setting up player", "Configuring events..." ] call life_fnc_setLoadingText;
[ ] call life_fnc_setupEVH;

//-- Setup hudSetup
[ "Setting up HUD", "Configuring events..." ] call life_fnc_setLoadingText;
[] call life_fnc_hudSetup;

//=== Setting up survival
[ "Setting up survival", "Configuring events..." ] call life_fnc_setLoadingText;
[] spawn life_fnc_survival;

//--- Setup Actions
[ "Setting up player", "Configuring actions..." ] call life_fnc_setLoadingText;
[ ] call life_fnc_setupActions;

//--- Setup ColorCorrections - only on older versions of A3 before Apex.
if ((productVersion select 2) < 159) then {
	[ "Setting up player", "Configuring Color Effects..." ] call life_fnc_setLoadingText;
	private _ppEffect = ppEffectCreate ["ColorCorrections",2400];
	_ppEffect ppEffectAdjust [ 0.88, 0.88, 0, [ 0.2, 0.29, 0.4, -0.22 ], [ 1, 1, 1, 1.3 ], [ 0.15, 0.09, 0.09, 0.0 ] ];
	_ppEffect ppEffectCommit 0;
	_ppEffect ppEffectEnable true;
};

//--- Wait for server
if ( isNil 'life_server_isReady' || { !life_server_isReady } ) then {

	[ "Waiting for server...", "Please wait..." ] call life_fnc_setLoadingText;
	waitUntil{ ( life_server_isReady || !isNil "life_server_extDB_notLoaded" ) };

	if !( isNil "life_server_extDB_notLoaded" ) exitWith {

		[ "There was an error!", "There was an error setting up the A3L server. Please report this to an admin on our ts: ts3.prismgaming.co.uk!" ] call life_fnc_setLoadingText;

		//--- Break out of init script
		breakOut "A3L_CLIENT_INIT";

	};

};

//--- Checking if wanted
[ "Setting up wanted list", "Configuring events..." ] call life_fnc_setLoadingText;
[getPlayerUID player,player getVariable["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];

//--- Request gear
[ "Requesting player information...", "We are currently loading your player from the database, please wait!" ] call life_fnc_setLoadingText;
[ ] call SOCK_fnc_dataQuery;

//--- Wait for gear
private _startRequestTime = diag_tickTime;
waitUntil { ( diag_tickTime - _startRequestTime > 30 ) || life_session_completed };

//--- If the session request timed out, then error.
if !( life_session_completed ) then {

	//--- Show error message
	[

		"There was an error!",
		"The request for your data timed out, please try again. If trying again does not work, please report this to an admin at ts3.prismgaming.co.uk! Returning to lobby in 5 seconds."

	] call life_fnc_setLoadingText;

//--- Wait for five seconds
uiSleep 5;

//--- End loading screen
endLoadingScreen;

//--- End the mission
endMission "END1";

//--- Break out of init script
breakOut "A3L_CLIENT_INIT";

};

//--- Start ESC Interruption Script
//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

//--- Setup Post-Session player variables
	player SVAR ["restrained",false,true];
	player SVAR ["Escorting",false,true];
	player SVAR ["transporting",false,true];
	player SVAR ["playerSurrender",false,true];

//--- Finished setup
	[ "Setup Finished", "Welcome to Amnart3Life UK!" ] call life_fnc_setLoadingText;
	loadFile "Ignore This.sqf";

//--- Call the init script for the player's side
	endLoadingScreen;
	private _initScriptHandle = switch ( playerSide ) do {

		case west: {

			[ ] spawn life_fnc_initCop

		};

		case civilian: {

			[ ] spawn life_fnc_initCiv

		};

		case independent: {

			[ ] spawn life_fnc_initMedic

		};

		default {

			false

		};

	};

//--- Ensure that the player is on a supported side.
	if ( _initScriptHandle isEqualType false ) exitWith { };

//--- Wait for init script to complete
	waitUntil { scriptDone _initScriptHandle };

//--- Start Paycheck Manager
	[] execFSM "core\fsm\main.fsm";

//--- Add Keyboard Event Handler
	( findDisplay 46 ) displayAddEventHandler [ "KeyDown", "_this call life_fnc_keyHandler" ];

//--- Setup player rating (wierd arma engine thing for AI)
	player addRating 10E+1;

//--- Setup Sidechat
	[ [ player, life_sidechat, playerSide ], "TON_fnc_managesc", false ] call life_fnc_mp;

//--- Setup Player Tags
	LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;

//--- Setup Object Reveal
	LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

//--- Setup Settings (View Distance exetra)
//	[] call life_fnc_settingsInit;

	/*
	//--- Start speaking loop
	[] spawn life_fnc_speaking;

	//--- Start the fuel manager
	[] spawn life_fnc_fuelManager;
	*/

//--- Define some small functions. TODO: Move to own files... this is shit.
	life_fnc_moveIn = compileFinal
	"
		player moveInCargo (_this select 0);
	";


	life_fnc_garageRefund = compileFinal
	"
		_price = _this select 0;
		_unit = _this select 1;
		if(_unit != player) exitWith {};
		RPUK_doshinbank = RPUK_doshinbank + _price;
	";

	life_fnc_massFix = compileFinal
	"
		_vehicle = _this;
		switch (typeOf _vehicle) do
		{
			case 'C_SUV_01_F': {_vehicle setCenterOfMass [-0.010813,-0.506166,-0.7];};
		};
	";

//--- Start Survival Script
	[] execVM "core\init_survival.sqf";

//--- Init has completed, allow player to be damaged.
	player allowDamage true;

//--- Spawn a thread to handle weather and data synching
	[] spawn {

		scriptName "Weather and Sync thread";

		private _lastSync = diag_tickTime;

		while { true } do {
	/*
			//--- Remove any sort of excessive clouds
			if ( overcast > 0.6 ) then {

				//--- Remove the excessive clouds
				0 setOvercast 0.5;

			};

			//--- Remove any sort of excessive fog
			if ( fog > 0.2 ) then {

				//--- Reset fog
				0 setFog 0;

			};
	*/
//--- If the difference is larger than 10 minutes + upto 5 minutes, then do a sync.
		if ( diag_tickTime - _lastSync > ( 600 + random 300 ) ) then {

			//--- Send request
			[ ] spawn SOCK_fnc_updateRequest;

			//--- Show sync notification
			[ "A3L Hive", "Data synced to the A3L Hive, next sync in 10-15 minutes." ] call life_fnc_showNotification;

			//--- Update last sync time
			_lastSync = diag_tickTime;

		};

		//--- Wait for 15 seconds beween running these tasks again.
		uiSleep 15;

	};

};
true
