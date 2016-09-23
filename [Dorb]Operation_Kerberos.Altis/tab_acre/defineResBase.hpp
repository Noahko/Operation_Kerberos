#define INCLUDE_DIALOG
#include "script_component.hpp"

/*extern*/ class RscButton;
/*extern*/ class RscControlsGroup;
/*extern*/ class RscControlsGroupNoScrollbars;
/*extern*/ class RscControlsGroupNoHScrollbars;

class GVAR(dlgBase) {
    idd = -1;
    name = "";
    onLoad = "";
    onUnload = "";
    class controlsBackground {
        class TabletPicture {
            idc = IDC_TABLET_BACKGROUND;
            shadow = 0;
            colorText[]={1,1,1,1};
            tooltipColorText[]={1,1,1,1};
        	tooltipColorBox[]={1,1,1,1};
        	tooltipColorShade[]={0,0,0,0.64999998};
            x = GUI_TAB_BACK_X;
            y = GUI_TAB_BACK_Y;
            w = GUI_TAB_BACK_W;
            h = GUI_TAB_BACK_H;
            text = QPATHTOF(ui\tablet_background.paa);
        };
    };
    class objects {};
    class controls {};
};

class GVAR(Shortcut_Base) {
    idc = -1;
    type = 1;
    style = "48 + 0x800";
    action = "";
    borderSize = 0;
    colorBackground = COLOR_DISABLED;
    colorBackgroundActive = COLOR_DISABLED;
    colorBackgroundDisabled = COLOR_DISABLED;
    colorBorder = COLOR_DISABLED;
    colorShadow = COLOR_DISABLED;

    colorDisabled = COLOR_SHORT_DISBLED;
    colorFocused = COLOR_SHORT_FOCUSED;
    colorText = COLOR_SHORT_TEXT;
    default = false;

    x = GUI_TAB_X;
    y = GUI_TAB_Y;
    w = GUI_TAB_W * 7;
    h = GUI_TAB_H * 7;

    offsetPressedX = 0;
    offsetPressedY = 0;

    offsetX = 0;
    offsetY = 0;

    soundEnter[]= {};
    soundPush[]= {};
    soundClick[]= {};
    soundEscape[]= {};

    text = "";
    toolTip = "";

    class attributes {
        font = "";
        shadow = 0;
        align = "center";
        color = "#000000";
    };
};

class GVAR(BaseSwitch) {
    idc = -1;
    x = 0;
    y = 0;
    h = (GUI_TAB_W * 10);
    w = (GUI_TAB_W * 60);

    onMouseEnter = QUOTE([ARR_2(_this,'enter')] call FUNC(switch););
    onMouseExit = QUOTE([ARR_2(_this,'exit')] call FUNC(switch););
    onMouseButtonDown = QUOTE([ARR_2(_this,'click')] call FUNC(switch););

    type = 15;
    style = 0;

    text_on = QPATHTOF(ui\switch_on.paa);
    text_off = QPATHTOF(ui\switch_on.paa);


    class VScrollbar {
        color[] = COLOR_DISABLED;
        width = 0;
        autoScrollSpeed = -1;
        autoScrollDelay = 0;
        autoScrollRewind = 0;
    };

    class HScrollbar {
        color[] = COLOR_DISABLED;
        height = 0;
    };

    class Controls {
        class background : GVAR(BaseText) {
            idc = -1000;
            colorText[] = COLOR_DISABLED;
            x = 1;
            y = 1;
            w = 1;
            h = 1;
        };
        class slider : GVAR(BasePicture) {
            idc = -1500;
            x = 0;
            y = 0.05;
            w = 0.2;
            h = 0.9;
        };
        class text : GVAR(BaseText) {
            idc = -2000;
            x = 0.2;
            y = 0.05;
            w = 0.8;
            h = 0.9;
            sizeEx = 0.9;
            colorBackground[] = COLOR_DISABLED;
        };
    };
};


class GVAR(BaseText) {
    idc = -1;
    type = 0;
    style = "0x00 + 0x0c";
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";;
    shadow = 0;
    colorShadow[] = COLOR_DISABLED;
    text = "";
    font = FONT_DEFAULT;
    colorText[] = COLOR_FONT;
    colorBackground[] = COLOR_BACKGROUND;

    tooltipColorText[] = COLOR_DISABLED;
    tooltipColorBox[] = COLOR_DISABLED;
    tooltipColorShade[] = COLOR_DISABLED;
    access = 0;
};
class GVAR(BasePicture) : GVAR(BaseText) {
    idc = -1;
    style = "48 + 0x800";
};


class GVAR(TopBar) : RscControlsGroupNoScrollbars  {
    idc = IDC_TABLET_APP_TOPBAR;
    x = GUI_TAB_X;
    y = GUI_TAB_Y;
    w = GUI_TAB_W * 160;
    h = GUI_TAB_H * 5;
    class controls {
        class GVAR(top_background) : GVAR(BaseText) {
            idc = IDC_TABLET_APP_TOPBAR_BACKGROUND;
            x = GUI_TAB_X;
            y = GUI_TAB_Y;
            w = GUI_TAB_W * 160;
            h = GUI_TAB_H * 5;
        };
        class GVAR(clock) : GVAR(BaseText) {
            idc = IDC_TABLET_APP_TOPBAR_CLOCK;
            x = GUI_TAB_X + GUI_TAB_W * 140;
            y = GUI_TAB_Y;
            w = GUI_TAB_W * 15;
            h = GUI_TAB_H * 5;
            sizeEx = GUI_TAB_H * 3;
            colorBackground[] = COLOR_DISABLED;
        };
    };
};

class GVAR(menue) : RscControlsGroupNoScrollbars {
    idc = IDC_TABLET_APP_ACRE_MENUE;
    x = GUI_TAB_X + GUI_TAB_H *5;
    y = GUI_TAB_Y;
    w = GUI_TAB_W * 20;
    h = GUI_TAB_H * 95;
    class controls {
        class GVAR(menue_home) : GVAR(Shortcut_Base) {
            idc = IDC_TABLET_APP_ACRE_MENUE_HOME;
            x = GUI_TAB_X + GUI_TAB_H * 5;
            y = GUI_TAB_Y;
            w = GUI_TAB_W * 20;
            h = GUI_TAB_H * 19;
            default = true;
        };
        class GVAR(menue_group) : GVAR(menue_home) {
            idc = IDC_TABLET_APP_ACRE_MENUE_GROUP;
            x = GUI_TAB_X + GUI_TAB_H * 24;
            default = false;
        };
        class GVAR(menue_squad) : GVAR(menue_group) {
            idc = IDC_TABLET_APP_ACRE_MENUE_SQUAD;
            x = GUI_TAB_X + GUI_TAB_H * 43;
        };
        class GVAR(menue_user) : GVAR(menue_group) {
            idc = IDC_TABLET_APP_ACRE_MENUE_USER;
            x = GUI_TAB_X + GUI_TAB_H * 62;
        };
        class GVAR(menue_user) : GVAR(menue_group) {
            idc = IDC_TABLET_APP_ACRE_MENUE_OPTIONS;
            x = GUI_TAB_X + GUI_TAB_H * 81;
        };
    };
};

class GVAR(radioentry) : RscControlsGroupNoScrollbars {
    idc = IDC_TABLET_APP_ACRE_RADIOENTRY;
    x = 0;
    y = 0;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 15;
    class controls {
        class GVAR(radioentry_icon) : GVAR(BasePicture) {
            idc = IDC_TABLET_APP_ACRE_RADIOENTRY_ICON;
            x = 0;
            y = 0.06;
            w = GUI_TAB_W * 10;
            h = GUI_TAB_H * 15;
        };
        class GVAR(radioentry_text) : GVAR(BaseText) {
            idc = IDC_TABLET_APP_ACRE_RADIOENTRY_TEXT;
            x = 0.25;
            y = 0.06;
            w = GUI_TAB_W * 30;
            h = GUI_TAB_H * 15;
            colorBackground[] = COLOR_DISABLED;
        };
    };
};
class GVAR(radiolist) : RscControlsGroupNoHScrollbars {
    idc = IDC_TABLET_APP_ACRE_RADIOLIST;
    x = GUI_TAB_X + GUI_TAB_W * 115;
    y = GUI_TAB_Y + GUI_TAB_H * 8;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 89;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class GVAR(radio_1) : GVAR(Shortcut_Base) {
            idc = IDC_TABLET_APP_ACRE_RADIO_1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
        class GVAR(radio_2) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_2;};
        class GVAR(radio_3) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_3;};
        class GVAR(radio_4) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_4;};
        class GVAR(radio_5) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_5;};
        class GVAR(radio_6) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_6;};
        class GVAR(radio_7) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_7;};
        class GVAR(radio_8) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_8;};
        class GVAR(radio_9) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_9;};
        class GVAR(radio_10) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_10;};
        class GVAR(radio_11) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_11;};
        class GVAR(radio_12) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_12;};
        class GVAR(radio_13) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_13;};
        class GVAR(radio_14) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_14;};
        class GVAR(radio_15) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_15;};
        class GVAR(radio_16) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_16;};
        class GVAR(radio_17) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_17;};
        class GVAR(radio_18) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_18;};
        class GVAR(radio_19) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_19;};
        class GVAR(radio_20) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_20;};
    };
};
class GVAR(radiolist) : RscControlsGroupNoHScrollbars {
    idc = IDC_TABLET_APP_ACRE_RADIOLIST;
    x = GUI_TAB_X + GUI_TAB_W * 115;
    y = GUI_TAB_Y + GUI_TAB_H * 8;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 89;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class GVAR(radio_1) : GVAR(Shortcut_Base) {
            idc = IDC_TABLET_APP_ACRE_RADIO_1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
        class GVAR(radio_2) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_2;};
        class GVAR(radio_3) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_3;};
        class GVAR(radio_4) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_4;};
        class GVAR(radio_5) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_5;};
        class GVAR(radio_6) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_6;};
        class GVAR(radio_7) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_7;};
        class GVAR(radio_8) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_8;};
        class GVAR(radio_9) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_9;};
        class GVAR(radio_10) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_10;};
        class GVAR(radio_11) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_11;};
        class GVAR(radio_12) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_12;};
        class GVAR(radio_13) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_13;};
        class GVAR(radio_14) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_14;};
        class GVAR(radio_15) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_15;};
        class GVAR(radio_16) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_16;};
        class GVAR(radio_17) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_17;};
        class GVAR(radio_18) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_18;};
        class GVAR(radio_19) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_19;};
        class GVAR(radio_20) : GVAR(radio_1) {idc = IDC_TABLET_APP_ACRE_RADIO_20;};
    };
};
class GVAR(memberlist) : RscControlsGroupNoHScrollbars {
    idc = IDC_TABLET_APP_ACRE_MEMBERLIST;
    x = GUI_TAB_X + GUI_TAB_W * 70;
    y = GUI_TAB_Y + GUI_TAB_H * 8;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 89;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class GVAR(member_1) : GVAR(Shortcut_Base) {
            idc = IDC_TABLET_APP_ACRE_MEMBER_1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
        class GVAR(member_2) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_2;};
        class GVAR(member_3) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_3;};
        class GVAR(member_4) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_4;};
        class GVAR(member_5) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_5;};
        class GVAR(member_6) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_6;};
        class GVAR(member_7) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_7;};
        class GVAR(member_8) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_8;};
        class GVAR(member_9) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_9;};
        class GVAR(member_10) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_10;};
        class GVAR(member_11) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_11;};
        class GVAR(member_12) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_12;};
        class GVAR(member_13) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_13;};
        class GVAR(member_14) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_14;};
        class GVAR(member_15) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_15;};
        class GVAR(member_16) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_16;};
        class GVAR(member_17) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_17;};
        class GVAR(member_18) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_18;};
        class GVAR(member_19) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_19;};
        class GVAR(member_20) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_20;};
        class GVAR(member_21) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_21;};
        class GVAR(member_22) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_22;};
        class GVAR(member_23) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_23;};
        class GVAR(member_24) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_24;};
        class GVAR(member_25) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_25;};
        class GVAR(member_26) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_26;};
        class GVAR(member_27) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_27;};
        class GVAR(member_28) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_28;};
        class GVAR(member_29) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_29;};
        class GVAR(member_30) : GVAR(member_1) {idc = IDC_TABLET_APP_ACRE_MEMBER_30;};
    };
};
class GVAR(squadlist) : RscControlsGroupNoHScrollbars {
    idc = IDC_TABLET_APP_ACRE_SQUADLIST;
    x = GUI_TAB_X + GUI_TAB_W * 70;
    y = GUI_TAB_Y + GUI_TAB_H * 8;
    w = GUI_TAB_W * 40;
    h = GUI_TAB_H * 89;
    class VScrollbar: VScrollbar {
        width = GUI_TAB_W;
    };
    class controls {
        class GVAR(squad_1) : GVAR(Shortcut_Base) {
            idc = IDC_TABLET_APP_ACRE_SQUAD_1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
        class GVAR(squad_2) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_2;};
        class GVAR(squad_3) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_3;};
        class GVAR(squad_4) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_4;};
        class GVAR(squad_5) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_5;};
        class GVAR(squad_6) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_6;};
        class GVAR(squad_7) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_7;};
        class GVAR(squad_8) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_8;};
        class GVAR(squad_9) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_9;};
        class GVAR(squad_10) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_10;};
        class GVAR(squad_11) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_11;};
        class GVAR(squad_12) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_12;};
        class GVAR(squad_13) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_13;};
        class GVAR(squad_14) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_14;};
        class GVAR(squad_15) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_15;};
        class GVAR(squad_16) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_16;};
        class GVAR(squad_17) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_17;};
        class GVAR(squad_18) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_18;};
        class GVAR(squad_19) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_19;};
        class GVAR(squad_20) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_20;};
        class GVAR(squad_21) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_21;};
        class GVAR(squad_22) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_22;};
        class GVAR(squad_23) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_23;};
        class GVAR(squad_24) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_24;};
        class GVAR(squad_25) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_25;};
        class GVAR(squad_26) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_26;};
        class GVAR(squad_27) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_27;};
        class GVAR(squad_28) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_28;};
        class GVAR(squad_29) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_29;};
        class GVAR(squad_30) : GVAR(squad_1) {idc = IDC_TABLET_APP_ACRE_SQUAD_30;};
    };
};
