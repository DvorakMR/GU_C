#include <cvirte.h>		
#include <userint.h>
#include "3.1.1.h"
#include <ansi_c.h>

static int panelHandle1, panelHandle2;
char text_box[64];
int text_length = 64;
int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle1 = LoadPanel (0, "3.1.1.uir", PANEL)) < 0)
		return -1;
	if ((panelHandle2 = LoadPanel (0, "3.1.1.uir", panel_2)) < 0)
		return -1;
	DisplayPanel (panelHandle1);
	DisplayPanel (panelHandle2);
	RunUserInterface ();
	DiscardPanel (panelHandle1);
	DiscardPanel (panelHandle2);
	return 0;
}

int CVICALLBACK panelCallback (int panel, int event, void *callbackData,
							   int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
		case EVENT_CLOSE:
			QuitUserInterface(0);
			break;
	}
	return 0;
}

int CVICALLBACK callback_panel2 (int panel, int event, void *callbackData,
								 int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
		case EVENT_CLOSE:

			break;
	}
	return 0;
}

int CVICALLBACK callback_ok (int panel, int control, int event,
							 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			//text_box = malloc(sizeof(char) * (text_length+1));
			GetCtrlVal(panelHandle1, PANEL_Text_Box_String, text_box);
			SetCtrlVal(panelHandle2, panel_2_str_output,text_box);
			//free(text_box);
			break;
	}
	return 0;
}

int CVICALLBACK Callback_cancel (int panel, int control, int event,
								 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}
