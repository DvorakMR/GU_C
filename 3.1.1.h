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

#define  PANEL                            1       /* callback function: panelCallback */
#define  PANEL_Text_Box_String            2       /* control type: string, callback function: (none) */
#define  PANEL_OK_Button                  3       /* control type: command, callback function: callback_ok */
#define  PANEL_Cancel_Button              4       /* control type: command, callback function: Callback_cancel */

#define  panel_2                          2       /* callback function: callback_panel2 */
#define  panel_2_str_output               2       /* control type: string, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK Callback_cancel(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK callback_ok(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK callback_panel2(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panelCallback(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif