/*
* @File:   fn_getOutMan.sqf
* @Author: Amnart
*
* Copyright (C) Ciaran Langton 2016 - All Rights Reserved - https://www.prismgaming.co.uk
* Unauthorized copying of this file, via any medium is strictly prohibited
* without the express permission
*/
params [
  ["_unit", objNull, [objNull]],
  ["_position", "", [""]],
  ["_vehicle", objNull, [objNull]],
  ["_turret", [], [[]]]
];
if (isNull _unit || isNull _vehicle) exitWith {};

//--- Store time of decamp for disabling weapons.
life_decamp_veh = time;

//--- CL: If we are the last person in the vehicle, update vehicle activity.
if (units _vehicle isEqualTo []) then {
  [_vehicle, "getOutMan"] remoteExecCall ["RPUKSRV_fnc_vehicleCleanupActivity", 2];
};

//--- If the user has a uniform, retexture it
[_unit, true] call life_fnc_HandleUniforms;

//--- If the user has a weapon, holster it.
if !(currentWeapon _unit isEqualTo "") then {
  life_curWep_h = currentWeapon _unit;
  _unit action ["SwitchWeapon", _unit, _unit, 100];
  _unit switchcamera cameraView;
};
