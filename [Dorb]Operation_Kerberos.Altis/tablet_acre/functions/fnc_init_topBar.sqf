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
#define DIALOG_INCLUDE
#include "script_component.hpp"
_this params ["_topBarCtrl"];


private _clock = _topBarCtrl controlsGroupCtrl IDC_TABLET_APP_TOPBAR_CLOCK;
private _handler = [FUNC(updateClockPFH),10,[_clock]] call CBA_fnc_addPerFrameHandler;

GVAR(onUnloadFunctions) pushBack [{(_this select 0) call CBA_fnc_removePerFrameHandler;},[_handler]];
