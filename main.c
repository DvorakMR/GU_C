#include <ansi_c.h>
#include <stdio.h>
#include "convert.h" //search for convert.h in same directory as sourcefile


int main() {
	float meter;
	scanf("%f", &meter);
	float mili = meter_to_mili(meter);
	printf("%f\n", mili);
	system("cmd /C pause");
	
	return 0;
}




