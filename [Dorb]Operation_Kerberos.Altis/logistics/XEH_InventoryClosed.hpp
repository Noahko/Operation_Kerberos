#define CBA_OFF
#include "script_component.hpp"
class CAManBase {
    class ADDON {
        InventoryClosed = QUOTE([ARR_2('GVAR(setContainerWeight)',(_this select 1))] call CBA_fnc_localEvent;);
    };
};