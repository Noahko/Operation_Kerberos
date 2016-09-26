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

#define HELPER_RADIOENTRY(NUMBER) \
    class DOUBLES(APP(radioentry),NUMBER) : APP(radioentry_1) { \
        idc = ##IDC_TABLET_APP_ACRE_RADIO_HELPER##NUMBER ; \
        y = ((1/8) * (NUMBER - 1)); \
    }; \
    class TRIPLES(APP(radioentry),NUMBER,pic) : APP(radioentry_1_pic) { \
        idc = ##-##IDC_TABLET_APP_ACRE_RADIO_HELPER##NUMBER ; \
        y = ((1/8) * (NUMBER - 1)); \
    }

class APP(radiolist) : RSC(BaseControlsGroupNoVScrollbar) {
    idc = IDC_TABLET_APP_ACRE_RADIOLIST;
    x = GUI_TAB_X + GUI_TAB_W * 115;
    y = GUI_TAB_Y + GUI_TAB_H * 9;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 88;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class APP(radioentry_1) : RSC(BaseText) {
            idc = IDC_TABLET_APP_ACRE_RADIO_01;
            x = 0;
            y = 0;
            w = GUI_TAB_W * 13;
            h = GUI_TAB_H * 11;
        };
        class APP(radioentry_1_pic) : RSC(BasePicture) {
            idc = -IDC_TABLET_APP_ACRE_RADIO_01;
            x = (13/40);
            y = 0;
            w = GUI_TAB_W * 27;
            h = GUI_TAB_H * 11;
        };
        HELPER_RADIOENTRY(02);
        HELPER_RADIOENTRY(03);
        HELPER_RADIOENTRY(04);
        HELPER_RADIOENTRY(05);
        HELPER_RADIOENTRY(06);
        HELPER_RADIOENTRY(07);
        HELPER_RADIOENTRY(08);
        HELPER_RADIOENTRY(09);
        HELPER_RADIOENTRY(10);
        HELPER_RADIOENTRY(11);
        HELPER_RADIOENTRY(12);
        HELPER_RADIOENTRY(13);
        HELPER_RADIOENTRY(14);
        HELPER_RADIOENTRY(15);
        HELPER_RADIOENTRY(16);
        HELPER_RADIOENTRY(17);
        HELPER_RADIOENTRY(18);
        HELPER_RADIOENTRY(19);
    };
};

#define HELPER_MEMBERENTRY(NUMBER) \
    class DOUBLES(APP(memberentry),NUMBER) : APP(memberentry_1) { \
        idc = ##IDC_TABLET_APP_ACRE_MEMBER_HELPER##NUMBER ; \
        y = ((1/8) * (NUMBER - 1)); \
    }



class APP(memberlist) : RSC(BaseControlsGroupNoVScrollbar) {
    idc = IDC_TABLET_APP_ACRE_MEMBERLIST;
    x = GUI_TAB_X + GUI_TAB_W * 70;
    y = GUI_TAB_Y + GUI_TAB_H * 9;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 88;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class APP(memberentry_1) : RSC(BaseText) {
            idc = IDC_TABLET_APP_ACRE_MEMBER_01;
            x = 0;
            y = 0;
            w = GUI_TAB_W * 40;
            h = GUI_TAB_H * 11;
        };
        HELPER_MEMBERENTRY(02);
        HELPER_MEMBERENTRY(03);
        HELPER_MEMBERENTRY(04);
        HELPER_MEMBERENTRY(05);
        HELPER_MEMBERENTRY(06);
        HELPER_MEMBERENTRY(07);
        HELPER_MEMBERENTRY(08);
        HELPER_MEMBERENTRY(09);
        HELPER_MEMBERENTRY(10);
        HELPER_MEMBERENTRY(11);
        HELPER_MEMBERENTRY(12);
        HELPER_MEMBERENTRY(13);
        HELPER_MEMBERENTRY(14);
        HELPER_MEMBERENTRY(15);
        HELPER_MEMBERENTRY(16);
        HELPER_MEMBERENTRY(17);
        HELPER_MEMBERENTRY(18);
        HELPER_MEMBERENTRY(19);
        HELPER_MEMBERENTRY(20);
        HELPER_MEMBERENTRY(21);
        HELPER_MEMBERENTRY(22);
        HELPER_MEMBERENTRY(23);
        HELPER_MEMBERENTRY(24);
        HELPER_MEMBERENTRY(25);
        HELPER_MEMBERENTRY(26);
        HELPER_MEMBERENTRY(27);
        HELPER_MEMBERENTRY(28);
        HELPER_MEMBERENTRY(29);
        HELPER_MEMBERENTRY(30);
    };
};


#define HELPER_SQUADENTRY(NUMBER) \
    class DOUBLES(APP(squadentry),NUMBER) : APP(squadentry_1) { \
        idc = ##IDC_TABLET_APP_ACRE_SQUAD_HELPER##NUMBER ; \
        y = ((1/8) * (NUMBER - 1)); \
    }; \
    class TRIPLES(APP(squadentry),NUMBER,pic) : APP(squadentry_1_pic) { \
        idc = ##-##IDC_TABLET_APP_ACRE_SQUAD_HELPER##NUMBER ; \
        y = ((1/8) * (NUMBER - 1)); \
    }

class APP(squadlist) : RSC(BaseControlsGroupNoVScrollbar) {
    idc = IDC_TABLET_APP_ACRE_SQUADLIST;
    x = GUI_TAB_X + GUI_TAB_W * 25;
    y = GUI_TAB_Y + GUI_TAB_H * 9;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 88;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class APP(squadentry_1) : RSC(BaseText) {
            idc = IDC_TABLET_APP_ACRE_SQUAD_01;
            x = 0;
            y = 0;
            w = GUI_TAB_W * 13;
            h = GUI_TAB_H * 11;
        };
        class APP(squadentry_1_pic) : RSC(BasePicture) {
            idc = -IDC_TABLET_APP_ACRE_SQUAD_01;
            x = (13/40);
            y = 0;
            w = GUI_TAB_W * 27;
            h = GUI_TAB_H * 11;
        };
        HELPER_SQUADENTRY(02);
        HELPER_SQUADENTRY(03);
        HELPER_SQUADENTRY(04);
        HELPER_SQUADENTRY(05);
        HELPER_SQUADENTRY(06);
        HELPER_SQUADENTRY(07);
        HELPER_SQUADENTRY(08);
        HELPER_SQUADENTRY(09);
        HELPER_SQUADENTRY(10);
        HELPER_SQUADENTRY(11);
        HELPER_SQUADENTRY(12);
        HELPER_SQUADENTRY(13);
        HELPER_SQUADENTRY(14);
        HELPER_SQUADENTRY(15);
        HELPER_SQUADENTRY(16);
        HELPER_SQUADENTRY(17);
        HELPER_SQUADENTRY(18);
        HELPER_SQUADENTRY(19);
        HELPER_SQUADENTRY(20);
        HELPER_SQUADENTRY(21);
        HELPER_SQUADENTRY(22);
        HELPER_SQUADENTRY(23);
        HELPER_SQUADENTRY(24);
        HELPER_SQUADENTRY(25);
        HELPER_SQUADENTRY(26);
        HELPER_SQUADENTRY(27);
        HELPER_SQUADENTRY(28);
        HELPER_SQUADENTRY(29);
        HELPER_SQUADENTRY(30);
    };
};

#define HELPER_HOMEENTRY(NUMBER) \
    class DOUBLES(APP(HOMEentry),NUMBER) : APP(HOMEentry_1) { \
        idc = ##IDC_TABLET_APP_ACRE_HOME_HELPER##NUMBER ; \
        y = ((1/8) * (NUMBER - 1)); \
    }; \
    class TRIPLES(APP(HOMEentry),NUMBER,pic) : APP(HOMEentry_1_pic) { \
        idc = ##-##IDC_TABLET_APP_ACRE_HOME_HELPER##NUMBER ; \
        y = ((1/8) * (NUMBER - 1)); \
    }

class APP(HOMElist) : RSC(BaseControlsGroupNoVScrollbar) {
    idc = IDC_TABLET_APP_ACRE_HOMELIST;
    x = GUI_TAB_X + GUI_TAB_W * 25;
    y = GUI_TAB_Y + GUI_TAB_H * 9;
    w = GUI_TAB_W * 130;
    h = GUI_TAB_H * 88;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class APP(HOMEentry_1) : RSC(BaseText) {
            idc = IDC_TABLET_APP_ACRE_HOME_01;
            x = 0;
            y = 0;
            w = GUI_TAB_W * 13;
            h = GUI_TAB_H * 11;
        };
        class APP(HOMEentry_1_pic) : RSC(BasePicture) {
            idc = -IDC_TABLET_APP_ACRE_HOME_01;
            x = (13/40);
            y = 0;
            w = GUI_TAB_W * 27;
            h = GUI_TAB_H * 11;
        };
        HELPER_HOMEENTRY(02);
        HELPER_HOMEENTRY(03);
        HELPER_HOMEENTRY(04);
        HELPER_HOMEENTRY(05);
        HELPER_HOMEENTRY(06);
        HELPER_HOMEENTRY(07);
        HELPER_HOMEENTRY(08);
        HELPER_HOMEENTRY(09);
        HELPER_HOMEENTRY(10);
        HELPER_HOMEENTRY(11);
        HELPER_HOMEENTRY(12);
        HELPER_HOMEENTRY(13);
        HELPER_HOMEENTRY(14);
        HELPER_HOMEENTRY(15);
        HELPER_HOMEENTRY(16);
        HELPER_HOMEENTRY(17);
        HELPER_HOMEENTRY(18);
        HELPER_HOMEENTRY(19);
        HELPER_HOMEENTRY(20);
        HELPER_HOMEENTRY(21);
        HELPER_HOMEENTRY(22);
        HELPER_HOMEENTRY(23);
        HELPER_HOMEENTRY(24);
        HELPER_HOMEENTRY(25);
        HELPER_HOMEENTRY(26);
        HELPER_HOMEENTRY(27);
        HELPER_HOMEENTRY(28);
        HELPER_HOMEENTRY(29);
        HELPER_HOMEENTRY(30);
    };
};






class APP(DIALOG) : RSC(dlgBase) {
    idd = IDC_TABLET_APP_ACRE;
    name = "Echidna-Tablet_ACRE-App";
    //onLoad = QUOTE(uiNamespace setVariable [ARR_2('RSC(dialog)',_this select 0)]; _this call FUNC(onLoad););
    //onUnload = QUOTE(_this call FUNC(onUnload);uiNamespace setVariable [ARR_2('RSC(dialog)',displayNull)];);
    class controls : controls {
        class APP(main_menue) : APP(main_menue) {};
        class APP(HOMElist) : APP(HOMElist) {};
        class APP(radiolist) : APP(radiolist) {};
        class APP(squadlist) : APP(squadlist) {};
        class APP(memberlist) : APP(memberlist) {};
    };
};
