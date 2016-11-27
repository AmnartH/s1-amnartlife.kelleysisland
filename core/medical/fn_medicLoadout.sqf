#include "..\..\script_macros.hpp"
/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Loads the medic out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

["U_O_OfficerUniform_ocamo",true] call life_fnc_handleItem;

player addItem "ItemGPS";
player assignItem "ItemGPS";

player addItem "ItemRadio";
player assignItem "ItemRadio";

player addItem "ItemMap";
player assignItem "ItemMap";

player addItem "ItemWatch";
player assignItem "ItemWatch";

player addItem "ItemCompass";
player assignItem "ItemCompass";

player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "FirstAidKit"; 
player addItem "FirstAidKit";

removeGoggles player;
removeHeadGear player;
if(hmd player != "") then {
	player unlinkItem (hmd player);
};

waitUntil {uniform player == "U_O_OfficerUniform_ocamo"};
[player, true] call life_fnc_HandleUniforms;
[] call life_fnc_saveGear;