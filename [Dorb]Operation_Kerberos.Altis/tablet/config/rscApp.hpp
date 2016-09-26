
class RSC(BaseTopBar) : RSC(BaseControlsGroupNoScrollbar)  {
    idc = IDC_TABLET_APP_TOPBAR;
    x = GUI_TAB_X;
    y = GUI_TAB_Y;
    w = GUI_TAB_W * 160;
    h = GUI_TAB_H * 5;
    class controls {
        class RSC(top_background) : RSC(BaseText) {
            idc = IDC_TABLET_APP_TOPBAR_BACKGROUND;
            text = "test";
            x = GUI_TAB_X;
            y = GUI_TAB_Y;
            w = GUI_TAB_W * 160;
            h = GUI_TAB_H * 5;
        };
        class RSC(clock) : RSC(BaseText) {
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


class RSC(dlgBase) {
    idd = -1;
    name = "";
    onLoad = "";
    onUnload = "";
    movingEnable = 0;
    enableSimulation = 1;
    fadein = 0;
    fadeout = 0;
    duration = 1000000;
    class controlsBackground {
        class TabletPicture : RSC(BasePicture) {
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
            //text = QPATHTOF(ui\tablet_background.paa);
            text = "";
        };
        class displaybackground : RSC(BaseText) {
            x = GUI_TAB_X;
            y = GUI_TAB_Y;
            w = GUI_TAB_W;
            h = GUI_TAB_H;
            colorBackground[] = COLOR_BACKGROUND;
        };
    };
    class objects {};
    class controls {};
};
