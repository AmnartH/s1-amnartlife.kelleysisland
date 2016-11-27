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

if (_position isEqualTo "driver") then {
  //--- No matter what, we need to inform the server of the driver change & store our veh.
  [_vehicle, "getInManDriver", [_unit]] remoteExecCall ["RPUKSRV_fnc_vehicleCleanupActivity", 2];
  life_lastDrivenVehicle = _vehicle;
} else {
  if (units _vehicle isEqualTo [_unit]) then {
    //--- We aren't the driver, yet we are the first unit. Request activity update.
    [_vehicle, "getInMan"] remoteExecCall ["RPUKSRV_fnc_vehicleCleanupActivity", 2];
  };
};
