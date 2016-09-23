/*
 * Author: Dorbedo
 * on load of the app
 *
 * Arguments:
 * none
 *
 * Return Value:
 * none
 *
 * Public: No
 */
#include "script_component.hpp"


{
    _x params ["_fnc",["_params",[]]];
    _params call _fnc;
} forEach GVAR(onUnloadFunctions);
