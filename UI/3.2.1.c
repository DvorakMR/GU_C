#include <cvirte.h>		
#include <userint.h>
#include "3.2.1.h"
#include <ansi_c.h>
static int panelHandle;
int x=0,y = 0;
char *text_box;
int text_length = 64;
int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "3.2.1.uir", PANEL)) < 0)
		return -1;
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}


int CVICALLBACK callback_ok (int panel, int control, int event,
							 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			text_box = malloc(sizeof(char) * (text_length+1));
			GetCtrlVal(panelHandle, PANEL_Text_Box_String, text_box);
			SetCtrlVal(panelHandle, PANEL_TEXTMSG,text_box);
			break;
	}
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
			QuitUserInterface(0);
			break;
	}
	return 0;
}

int CVICALLBACK decor_cb (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

int CVICALLBACK text_cb (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

int CVICALLBACK color_cb (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2) {
	int color = 0;
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal(panelHandle,PANEL_COLORNUM,&color);
			SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_TEXT_COLOR,color);
			break;
	}
	return 0;
}

int CVICALLBACK cb_up (int panel, int control, int event,
					   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_TOP,&y);
			y -= 10;
			SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_TOP,y);

			break;
	}
	return 0;
}

int CVICALLBACK cb_down (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_TOP,&y);
			y += 10;
			SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_TOP,y);
			break;
	}
	return 0;
}

int CVICALLBACK cb_RIGHT (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_LEFT,&x);
			x += 10;
			SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_LEFT,x);

			break;
	}
	return 0;
}

int CVICALLBACK cb_left (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_LEFT,&x);
			x -= 10;
			SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_LEFT,x);

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
