/*
    Author: Dorbedo

    Description:
        logs Teamkill

*/
_this spawn {
    #include "script_component.hpp"
    SCRIPT(EH_hit);
    CHECK(!(isPlayer (_this select 0)))
    CHECK(!(isPlayer (_this select 1)))
    CHECK((_this select 0)==(_this select 1))
    [
        QGVAR(teamkill),
        [format["Teambeschuss: %1 / %2 beschossen von %3 / %4   Damage=%5",(_this select 0),name(_this select 0),(_this select 1),name(_this select 1),(_this select 2)]]
    ] call CBA_fnc_globalEvent;
};