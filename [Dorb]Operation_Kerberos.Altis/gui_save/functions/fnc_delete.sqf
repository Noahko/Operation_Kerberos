/*
    Author: Dorbedo

    Description:
    deletes



*/
#define INCLUDE_GUI
#include "script_component.hpp"

disableSerialization;

private _ctrledit = findDisplay IDD_SAVE_DLG displayCtrl IDC_SAVE_EDIT;
private _list = profileNamespace getVariable [GVAR(list),[]];
private _name = ctrlText _ctrledit;
CHECK(_name isEqualTo "")
private _index = -1;
{
    if ((_x select 0)isEqualTo _name) exitWith {
        _index = _forEachIndex;
    };
}forEach _list;

If (_index >= 0) exitWith {
    _list deleteAt _index;
    profileNamespace setVariable [GVAR(list),_list];
};
