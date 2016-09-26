

/*
 * Messaging
*/

#define GUI_MSG_X (safezoneX + 0.5 * GUI_GRID_W)
//#define GUI_MSG_Y (5 * GUI_GRID_H + safezoneY) ((5 * GUI_GRID_H  + safezoneY)+(5 * IGUI_TEXT_SIZE_MEDIUM))
#define GUI_MSG_Y ((5 * GUI_GRID_H  + safezoneY)+(5 * IGUI_TEXT_SIZE_MEDIUM))
#define GUI_MSG_W (10 * GUI_GRID_W)
#define GUI_MSG_H (4 * GUI_GRID_H)
#define GUI_MSG_HEAD (1 * GUI_GRID_H)
#define GUI_MSG_COL (0.2 * GUI_GRID_W)
#define GUI_MSG_TEXT (3 * GUI_GRID_H)



// Tablett

// distance to outer display
#define GUI_TAB_BACK_W (GUI_GRID_WAbs-GUI_GRID_W)
#define GUI_TAB_BACK_H (GUI_GRID_HAbs-GUI_GRID_H)
#define GUI_TAB_BACK_X (GUI_GRID_X-(GUI_GRID_W*0.5))
#define GUI_TAB_BACK_Y (GUI_GRID_Y-(GUI_GRID_H*0.5))

// Display Area (16:10 Format)
#define GUI_TAB_W ((GUI_GRID_WAbs-(6*GUI_GRID_W))/160)
#define GUI_TAB_H ((GUI_GRID_WAbs-(6*GUI_GRID_W))/100)
#define GUI_TAB_X (GUI_TAB_BACK_X+(2.5*GUI_TAB_BACK_W))
#define GUI_TAB_Y (GUI_TAB_BACK_Y+(2.5*GUI_TAB_BACK_H))
#define GUI_TAB_CenterX (GUI_TAB_X+(GUI_GRID_WAbs/2))
#define GUI_TAB_CenterY (GUI_TAB_Y+(GUI_GRID_HAbs/2))
