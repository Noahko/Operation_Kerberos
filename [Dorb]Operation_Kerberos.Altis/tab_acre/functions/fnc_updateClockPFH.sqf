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

(_this select 0) params ["_control"];

if ((isNil _control)||{isNull _control}) exitWith {(_this select 1) call CBA_fnc_removePerFrameHandler;};
private _time = format["%1:%2",floor daytime,(daytime mod 1)*60];
_control ctrlSetText _time;
