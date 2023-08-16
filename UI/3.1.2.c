#include <cvirte.h>		
#include <userint.h>
#include "3.1.2.h"

static int panelHandle;
int n=1;

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "3.1.2.uir", PANEL)) < 0)
		return -1;
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}

int CVICALLBACK panelCB (int panel, int event, void *callbackData,
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

int CVICALLBACK timer_callback (int panel, int control, int event,
								void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_TIMER_TICK:
			switch(n) {
				case 1:
					SetCtrlVal(panelHandle, PANEL_LED_5, 0); //takes panel, object inside panel, set value
					SetCtrlVal(panelHandle, PANEL_LED_1, 1);
					++n;
					break;
				case 2:
					SetCtrlVal(panelHandle, PANEL_LED_1, 0);
					SetCtrlVal(panelHandle, PANEL_LED_2, 1);
					++n;
					break;
				case 3:
					SetCtrlVal(panelHandle, PANEL_LED_2, 0);
					SetCtrlVal(panelHandle, PANEL_LED_3, 1);
					++n;
					break;
				case 4:
					SetCtrlVal(panelHandle, PANEL_LED_3, 0);
					SetCtrlVal(panelHandle, PANEL_LED_4, 1);
					++n;
					break;
				case 5:
					SetCtrlVal(panelHandle, PANEL_LED_4, 0);
					SetCtrlVal(panelHandle, PANEL_LED_5, 1);
					n = 1;
					break;
				}
			break;
	}
	return 0;
}

int CVICALLBACK QuitCallback (int panel, int control, int event,
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
