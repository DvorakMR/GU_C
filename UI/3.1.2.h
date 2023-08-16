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
#define  PANEL_LED_5                      2       /* control type: LED, callback function: (none) */
#define  PANEL_LED_4                      3       /* control type: LED, callback function: (none) */
#define  PANEL_LED_3                      4       /* control type: LED, callback function: (none) */
#define  PANEL_LED_2                      5       /* control type: LED, callback function: (none) */
#define  PANEL_LED_1                      6       /* control type: LED, callback function: (none) */
#define  PANEL_QUITBUTTON                 7       /* control type: command, callback function: QuitCallback */
#define  PANEL_TIMER                      8       /* control type: timer, callback function: timer_callback */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK panelCB(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK QuitCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK timer_callback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif