/*
    Author: Dorbedo
*/

#define CBA_OFF
#include "script_component.hpp"

#include "\a3\ui_f\hpp\defineCommon.inc"
#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#include "\a3\ui_f\hpp\defineResincl.inc"


/// Messaging



class dorb2_gui_new_RscStructuredText {
    idc = -1;
    type = 13;  // defined constant
    style = 0x00;            // defined constant
    colorBackground[] = COLOR_MSG_BACKGROUND;
    size = GUI_TEXT_SIZE_MEDIUM;
    text = "";
    class Attributes {
        font = GUI_FONT_NORMAL;
        color = "#000000";
        align = "left";
        valign = "middle";
        shadow = 0;
        shadowColor = "#ff0000";
        size = 1;
    };
};
class dorb2_gui_new_RscText {
    access = 0;
    type = 0;
    idc = -1;
    style = 0x00;
    font = GUI_FONT_NORMAL;
    sizeEx = GUI_TEXT_SIZE_MEDIUM;
    colorBackground[] = DORB_GUI_COL_BACKGROUND;
    colorText[] = {RAL7047,1};
    text = "";
    fixedWidth = 0;
    shadow = 0;
};
