/*
	File: fn_HandleUniforms.sqf
	Author: Amnart Tear

	Description: Selects local or global uniform texture override and calls accordingly
	_unit: player to be retextured
	_propagate: true = spawn via MP framework, false = just call locally.

*/

private ["_unit", "_propagate", "_unitgrpside"];

_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_propagate = [_this,1,false,[false]] call BIS_fnc_param;

if (isNull _unit) exitWith {diag_log "fn_HandleUniforms called on null unit";};
if (!isPlayer _unit) then {
	//Its not a player, assume it is the dummy on the spawn screen and use the player texutre.
	_unitgrpside = playerSide; //RPUKDummy from spawn screen!
	_propagate = false; //Lock out propagation if it isn't a player.
} else {
	_unitgrpside = side (group _unit);
};

switch (_unitgrpside) do
{
	case west:
	{
		if (_propagate) then {
			[[_unit, "",backpack _unit], "life_fnc_ReTexBackpack", true, true] spawn life_fnc_MP ;
		} else {
			[_unit, "",backpack _unit] call life_fnc_ReTexBackpack;
		};
		switch (uniform _unit) do
		{

			case "U_I_CombatUniform":
			{
				if (_propagate) then {
					[[_unit, "textures\police\uniform\pcso.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\police\uniform\pcso.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case "U_B_CombatUniform_mcam_worn":
			{
				if (_propagate) then {
					[[_unit, "textures\police\uniform\ar.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\police\uniform\ar.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case "U_I_CombatUniform_tshirt":
			{
				if (_propagate) then {
					[[_unit, "textures\police\uniform\nca.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\police\uniform\nca.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case "U_IG_Guerrilla_6_1":
			{
				if (_propagate) then {
					[[_unit, "textures\police\uniform\police.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\police\uniform\police.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case "U_B_HeliPilotCoveralls":
			{
				if (_propagate) then {
					[[_unit, "textures\police\uniform\npas.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\police\uniform\npas.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case default {};
		};
	};

	case independent:
	{
		if(backpack _unit == "B_Carryall_mcamo") then {
			if (_propagate) then {
				[[_unit, "textures\nhs\nhsbackpack.paa",backpack _unit], "life_fnc_ReTexBackpack", true, true] spawn life_fnc_MP ;
			} else {
				[_unit, "textures\nhs\nhsbackpack.paa",backpack _unit] call life_fnc_ReTexBackpack;
			};
		};

		switch (uniform _unit) do
		{
			case "U_O_OfficerUniform_ocamo":
			{
				if (_propagate) then {
					[[_unit, "textures\nhs\nhsuniform.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\nhs\nhsuniform.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};
		};
	};

	case civilian:
	{

		switch (uniform _unit) do
		{
			case "U_BG_Guerilla3_1": // was U_B_CombatUniform_mcam_worn
			{
				if (_propagate) then {
					[[_unit, "textures\civilian\bountyhunter\Bounty2.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\civilian\bountyhunter\Bounty2.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case "U_C_Scientist":
			{
				if (_propagate) then {
					[[_unit, "textures\civilian\clothes\prisoner.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\civilian\clothes\prisoner.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case "U_O_CombatUniform_oucamo":
			{
				if (_propagate) then {
					[[_unit, "textures\unmc\unmcuniform.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\unmc\unmcuniform.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case "U_O_PilotCoveralls":
			{
				if (_propagate) then {
					[[_unit, "textures\unmc\unmcpilot.paa",uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP ;
				} else {
					[_unit, "textures\unmc\unmcpilot.paa",uniform _unit] call life_fnc_ReTexUniform;
				};
			};

			case default {
				#define cfgPath missionConfigFile >> "CfgUniform"
				if(isClass (cfgPath >> uniform _unit)) then {
					_arr = getArray(cfgPath >> uniform _unit >> "textures");
					if(count _arr > 0 &&
						{_unit getVariable["customUniform",["",-1]] select 1 != -1} &&
						{_unit getVariable["customUniform",["",-1]] select 0 == uniform _unit}) then {

						_id = (_unit getVariable["customUniform",["", -1]] select 1);
						_data = _arr select _id;
						_name = _data select 0;
						_texture = _data select 1;
						if (_propagate) then {
							[[_unit, _texture, uniform _unit], "life_fnc_ReTexUniform", true, true] spawn life_fnc_MP;
						} else {
							[_unit, _texture, uniform _unit] call life_fnc_ReTexUniform;
						};
					};
				};
			};
		};
	};
};
