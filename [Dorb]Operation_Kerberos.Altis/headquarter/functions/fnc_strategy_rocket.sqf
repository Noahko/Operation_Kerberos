/*
    Author: Dorbedo

    Description:
        revon

    Parameter(s):
        none

    Returns:
        none
*/
#include "script_component.hpp"
SCRIPT(strategy_rocket);
_this params ["_currentLogic","_currenttroopsNeeded"];

private _currentPosition = getPosATL _currentLogic;

private _nearUnits = _currentPosition nearEntities [["CAManBase","Car","Tank"], 100];

private _nearestPos = _currentPosition;
private _distance = 900;
private _dir = random(360);
{
    If ((side _x == GVARMAIN(playerside))&&{((_x distance2D _currentPosition)< _distance)}) then {
        _distance = _x distance2D _currentPosition;
        _nearestPos = getPosATL _x;
        _dir = getDir _x;
    };
} forEach _nearUnits;

private _amount = 4;
private _return = 20;
if (_currenttroopsNeeded > 40) then {
    _return = 80;
    _amount = 16;
};


[_currentPosition,2,_amount] call FUNC(fdc_placeOrder);
[QUOTE(_this call FUNC(attackpos_remove)),[_currentLogic],200] call CBA_fnc_waitAndExecute;

_return;
