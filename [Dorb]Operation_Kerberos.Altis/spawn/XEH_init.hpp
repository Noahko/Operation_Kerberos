#define CBA_OFF
#include "script_component.hpp"
class CAManBase {
    class ADDON {
        init = QUOTE(If(local (_this select 0)) then {_this call FUNC(gear);};);
    };
};
class rhsusf_M1083A1P2_B_M2_d_Medical_fmtv_usarmy {
    class ADDON {
        init = QUOTE(_this call FUNC(addACEMedicalItems));
    };
};
class rhsusf_M1083A1P2_B_M2_d_MHQ_fmtv_usarmy {
    class ADDON {
        init = QUOTE(_this call FUNC(addTFR));
    };
};
class rhs_gaz66_ap2_base {
    class ADDON {
        init = QUOTE(_this call FUNC(addACEMedicalItems));
    };
};
class ACE_bodyBagObject {
    class ADDON {
        init = "if (local (_this select 0)) then {deleteVehicle (_this select 0);};";
    };
};
