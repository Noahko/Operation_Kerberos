/*
Author: Dorbedo
*/
#define INCLUDE_DIALOG
#define CBA_OFF
#include "script_component.hpp"

/*
class RscTitles {
*/
    class APP(message_1) {
        idd = IDD_MSG_MESSAGE_1;
        x = GUI_MSG_X;
        y = GUI_MSG_Y;
        w = GUI_MSG_W;
        h = GUI_MSG_H;
        fade = 1;
        duration = 15;
        onLoad = QUOTE(with missionnameSpace do {disableSerialization; GVAR(msg_cur) - [_this select 0];GVAR(msg_cur) pushBack (_this select 0);};); /// pushbackunique is wrong at this point -> the new control needs to be at the last position
        class controls {
            class background : RSC(BaseText) {
                idc = IDC_MSG_BACKGROUND;
                x = GUI_MSG_X;
                y = GUI_MSG_Y;
                w = GUI_MSG_W;
                h = GUI_MSG_H;
                colorBackground[] = COLOR_MSG_BACKGROUND;
            };
            class stripe : background {
                idc = IDC_MSG_STRIPE;
                w = GUI_MSG_COL;
                h = GUI_MSG_HEAD + GUI_MSG_TEXT;
                colorBackground[] = COLOR_MSG_GREEN;
            };
            class header : RSC(BaseStructuredText) {
                idc = IDC_MSG_HEADER;
                x = GUI_MSG_X + GUI_MSG_COL;
                y = GUI_MSG_Y;
                w = GUI_MSG_W;
                h = GUI_MSG_HEAD;
                text = "ERROR: No Header";
                shadow = 0;
                colorBackground[] = COLOR_DISABLED;
                colorText[] = COLOR_MSG_TEXT;
                class Attributes : Attributes {
                    shadow = 0;
                    font = GUI_FONT_BOLD;
                };
            };
            class content : header {
                idc = IDC_MSG_TEXT;
                x = GUI_MSG_X + GUI_MSG_COL;
                y = (GUI_MSG_Y + GUI_MSG_HEAD);
                h = GUI_MSG_TEXT;
                text = "ERROR: No Text";
                size = GUI_TEXT_SIZE_SMALL;
                class Attributes : Attributes {
                    shadow = 0;
                    font = GUI_FONT_THIN;
                };
            };
        };
    };
    class APP(message_2) : APP(message_1) {idd = IDD_MSG_MESSAGE_2;};
    class APP(message_3) : APP(message_1) {idd = IDD_MSG_MESSAGE_3;};
    class APP(message_4) : APP(message_1) {idd = IDD_MSG_MESSAGE_4;};
    class APP(message_5) : APP(message_1) {idd = IDD_MSG_MESSAGE_5;};
    class APP(message_6) : APP(message_1) {idd = IDD_MSG_MESSAGE_6;};
    class APP(message_7) : APP(message_1) {idd = IDD_MSG_MESSAGE_7;};
    class APP(message_8) : APP(message_1) {idd = IDD_MSG_MESSAGE_8;};
    class APP(message_9) : APP(message_1) {idd = IDD_MSG_MESSAGE_9;};
/*
};
*/
