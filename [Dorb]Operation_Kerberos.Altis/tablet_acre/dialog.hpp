#define INCLUDE_DIALOG
#define CBA_OFF
#include "script_component.hpp"
#include "AppResIncl.hpp"

class APP(main_menue) : RSC(BaseControlsGroupNoScrollbar) {
    idc = IDC_TABLET_APP_ACRE_MENUE;
    x = GUI_TAB_X + GUI_TAB_H *5;
    y = GUI_TAB_Y;
    w = GUI_TAB_W * 20;
    h = GUI_TAB_H * 95;
    class controls {
        class APP(menue_home) : RSC(BaseShortcut) {
            idc = IDC_TABLET_APP_ACRE_MENUE_HOME;
            x = 0;
            y = (5/95);
            w = GUI_TAB_W * 20;
            h = GUI_TAB_H * 19;
            default = true;
        };
        class APP(menue_group) : APP(menue_home) {
            idc = IDC_TABLET_APP_ACRE_MENUE_GROUP;
            y = (22/95);
            default = false;
        };
        class APP(menue_squad) : APP(menue_group) {
            idc = IDC_TABLET_APP_ACRE_MENUE_SQUAD;
            y = (39/95);
        };
        class APP(menue_user) : APP(menue_group) {
            idc = IDC_TABLET_APP_ACRE_MENUE_USER;
            y = (56/95);
        };
        class APP(menue_options) : APP(menue_group) {
            idc = IDC_TABLET_APP_ACRE_MENUE_OPTIONS;
            y = (73/95);
        };
    };
};

/*

#define HELPER_RADIOENTRY(NUMBER)




class RSC(radioentry) : RSC(BaseControlsGroupNoScrollbar) {
    idc = IDC_TABLET_APP_ACRE_RADIOENTRY;
    x = 0;
    y = 0;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 15;
    class controls {
        class RSC(radioentry_icon) : RSC(BasePicture) {
            idc = IDC_TABLET_APP_ACRE_RADIOENTRY_ICON;
            x = 0;
            y = 0.06;
            w = GUI_TAB_W * 10;
            h = GUI_TAB_H * 15;
        };
        class RSC(radioentry_text) : RSC(BaseText) {
            idc = IDC_TABLET_APP_ACRE_RADIOENTRY_TEXT;
            x = 0.25;
            y = 0.06;
            w = GUI_TAB_W * 30;
            h = GUI_TAB_H * 15;
            colorBackground[] = COLOR_DISABLED;
        };
    };
};
class RSC(radiolist) : RSC(BaseControlsGroupNoVScrollbar) {
    idc = IDC_TABLET_APP_ACRE_RADIOLIST;
    x = GUI_TAB_X + GUI_TAB_W * 115;
    y = GUI_TAB_Y + GUI_TAB_H * 8;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 89;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class RSC(radio_1) : RSC(radioentry) {
            idc = IDC_TABLET_APP_ACRE_RADIO_1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
        class RSC(radio_2) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_2;};
        class RSC(radio_3) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_3;};
        class RSC(radio_4) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_4;};
        class RSC(radio_5) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_5;};
        class RSC(radio_6) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_6;};
        class RSC(radio_7) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_7;};
        class RSC(radio_8) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_8;};
        class RSC(radio_9) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_9;};
        class RSC(radio_10) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_10;};
        class RSC(radio_11) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_11;};
        class RSC(radio_12) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_12;};
        class RSC(radio_13) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_13;};
        class RSC(radio_14) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_14;};
        class RSC(radio_15) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_15;};
        class RSC(radio_16) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_16;};
        class RSC(radio_17) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_17;};
        class RSC(radio_18) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_18;};
        class RSC(radio_19) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_19;};
        class RSC(radio_20) : RSC(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_20;};
    };
};
class RSC(memberlist) : RSC(BaseControlsGroupNoVScrollbar) {
    idc = IDC_TABLET_APP_ACRE_MEMBERLIST;
    x = GUI_TAB_X + GUI_TAB_W * 70;
    y = GUI_TAB_Y + GUI_TAB_H * 8;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 89;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class RSC(member_1) : RSC(Shortcut_Base) {
            idc = IDC_TABLET_APP_ACRE_MEMBER_1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
        class RSC(member_2) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_2;};
        class RSC(member_3) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_3;};
        class RSC(member_4) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_4;};
        class RSC(member_5) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_5;};
        class RSC(member_6) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_6;};
        class RSC(member_7) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_7;};
        class RSC(member_8) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_8;};
        class RSC(member_9) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_9;};
        class RSC(member_10) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_10;};
        class RSC(member_11) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_11;};
        class RSC(member_12) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_12;};
        class RSC(member_13) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_13;};
        class RSC(member_14) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_14;};
        class RSC(member_15) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_15;};
        class RSC(member_16) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_16;};
        class RSC(member_17) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_17;};
        class RSC(member_18) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_18;};
        class RSC(member_19) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_19;};
        class RSC(member_20) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_20;};
        class RSC(member_21) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_21;};
        class RSC(member_22) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_22;};
        class RSC(member_23) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_23;};
        class RSC(member_24) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_24;};
        class RSC(member_25) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_25;};
        class RSC(member_26) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_26;};
        class RSC(member_27) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_27;};
        class RSC(member_28) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_28;};
        class RSC(member_29) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_29;};
        class RSC(member_30) : RSC(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_30;};
    };
};
class RSC(squadlist) : RSC(BaseControlsGroupNoVScrollbar) {
    idc = IDC_TABLET_APP_ACRE_SQUADLIST;
    x = GUI_TAB_X + GUI_TAB_W * 70;
    y = GUI_TAB_Y + GUI_TAB_H * 8;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 89;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class RSC(squad_1) : RSC(Shortcut_Base) {
            idc = IDC_TABLET_APP_ACRE_SQUAD_1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
        class RSC(squad_2) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_2;};
        class RSC(squad_3) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_3;};
        class RSC(squad_4) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_4;};
        class RSC(squad_5) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_5;};
        class RSC(squad_6) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_6;};
        class RSC(squad_7) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_7;};
        class RSC(squad_8) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_8;};
        class RSC(squad_9) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_9;};
        class RSC(squad_10) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_10;};
        class RSC(squad_11) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_11;};
        class RSC(squad_12) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_12;};
        class RSC(squad_13) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_13;};
        class RSC(squad_14) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_14;};
        class RSC(squad_15) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_15;};
        class RSC(squad_16) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_16;};
        class RSC(squad_17) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_17;};
        class RSC(squad_18) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_18;};
        class RSC(squad_19) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_19;};
        class RSC(squad_20) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_20;};
        class RSC(squad_21) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_21;};
        class RSC(squad_22) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_22;};
        class RSC(squad_23) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_23;};
        class RSC(squad_24) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_24;};
        class RSC(squad_25) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_25;};
        class RSC(squad_26) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_26;};
        class RSC(squad_27) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_27;};
        class RSC(squad_28) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_28;};
        class RSC(squad_29) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_29;};
        class RSC(squad_30) : RSC(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_30;};
    };
};

class RSC(mainMenu) : RSC(dlgBase) {
    idd = IDC_TABLET_APP_ACRE;
    name = "Echidna-Tablet_ACRE-App";
    onLoad = QUOTE(uiNamespace setVariable [ARR_2('RSC(dialog)',_this select 0)]; _this call FUNC(onLoad););
    onUnload = QUOTE(_this call FUNC(onUnload);uiNamespace setVariable [ARR_2('RSC(dialog)',displayNull)];);
    class controls : controls {
        class RSC(TopBar) : RSC(BaseTopBar) {};
        class RSC(menue) : RSC(menue) {};

    };
};
*/
