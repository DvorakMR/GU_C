/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1       /* callback function: panelCB */
#define  PANEL_Text_Box_String            2       /* control type: string, callback function: (none) */
#define  PANEL_OK_Button                  3       /* control type: command, callback function: callback_ok */
#define  PANEL_DECORATION                 4       /* control type: deco, callback function: decor_cb */
#define  PANEL_COLORNUM                   5       /* control type: color, callback function: color_cb */
#define  PANEL_DOWN                       6       /* control type: command, callback function: cb_down */
#define  PANEL_RIGHT                      7       /* control type: command, callback function: cb_RIGHT */
#define  PANEL_UP_2                       8       /* control type: command, callback function: cb_up */
#define  PANEL_LEFT                       9       /* control type: command, callback function: cb_left */
#define  PANEL_QUITBUTTON                 10      /* control type: command, callback function: QuitCallback */
#define  PANEL_TEXTMSG                    11      /* control type: textMsg, callback function: text_cb */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK callback_ok(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cb_down(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cb_left(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cb_RIGHT(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK cb_up(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK color_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK decor_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panelCB(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK QuitCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK text_cb(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif