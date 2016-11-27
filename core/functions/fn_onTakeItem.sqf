#include "..\..\script_macros.hpp"
/*
	File: fn_onTakeItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Blocks the unit from taking something they should not have.
*/
private["_unit","_item"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_container = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_item = [_this,2,"",[""]] call BIS_fnc_param;

if(isNull _unit OR _item == "") exitWith {}; //Bad thingies?

switch(playerSide) do
{
	case west: {
		if(_item in ["U_Rangemaster"]) then {
			[] call life_fnc_playerSkins;
		};
	};
	case civilian: {
		//Currently stoping the civilians from taking the Rangemaster clothing from medics or cops.
		if(_item in ["U_B_CombatUniform_mcam_worn"]) then {
			[_item,false,false,false,false] call life_fnc_handleItem;
		};
		if(_item in ["U_BG_Guerilla3_1"]) then {
			[_item,false,false,false,false] call life_fnc_handleItem;
		};
		if(_item in ["hgun_P07_snds_F","hgun_P07_snds_F"]) then {
			[_item,false,false,false,false] call life_fnc_handleItem;
		};
		if(_item in ["U_NikosAgedBody"]) then {
			[_item,false,false,false,false] call life_fnc_handleItem;
		};

	};
	case independent: {};
};

[player, true] call life_fnc_HandleUniforms; //choose uniform retexture and send it to everyone. CL - Enable pickup of uniform and retexture.