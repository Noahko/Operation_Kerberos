/*
    Author: Dorbedo

    Description:
        serializes a hash

    Parameter(s):
        None

    Return
        None
*/
#include "script_component.hpp"
#define SELF EFUNC(main,deserialize)
_this params ["_toDeserialize"];
If (IS_SERIALIZEDHASH(_toDeserialize)) exitWith {
    _toDeserialize params ["","_keys","_values"];
    private _hash = HASH_CREATE;
    {
        private _val = _values select _forEachIndex;
        If (IS_SERIALIZEDHASH(_val)) then {
            _val = [_val] call SELF;
        }else{
            If (IS_ARRAY(_val)) then {
                _val = [_val] call SELF;
            };
        };
        HASH_SET(_hash,_x,_val);
    } forEach _keys;
    _hash;
};
If (IS_ARRAY(_toDeserialize)) exitWith {
    private _return = [];
    {
        _return pushBack ([_x] call SELF);
    } count _hash;
    _return;
};
_toDeserialize;
