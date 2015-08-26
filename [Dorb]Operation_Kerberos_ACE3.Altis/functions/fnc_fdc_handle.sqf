/*
	Author: Dorbedo
	
	Description:
		The FDC - Logic
		coordinates artilleryfire, sends firemissions, tries to defend artillery sites
	
	Parameter(s):
		0 : ARRAY	- params
		1 : SCALAR	- Handle
	
*/

#include "script_component.hpp"
SCRIPT(fdc_register);

If (isNil "DORB_FDC_LOGIC") exitwith {
	[_this select 1] call CBA_fnc_removePerFrameHandler;
};


private["_mortars","_artilleries","_rocket"];
_mortars = GETVAR(DORB_FDC_LOGIC,DORB_FDC_MORTARS,[]);
_artilleries = GETVAR(DORB_FDC_LOGIC,DORB_FDC_ARTILLERIES,[]);
_rocket = GETVAR(DORB_FDC_LOGIC,DORB_FDC_ROCKET,[]);

