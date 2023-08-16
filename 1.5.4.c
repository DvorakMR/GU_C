#include <ansi_c.h>





int main() {
double dblField [100], *pDblField;
dblField[10] = 1234.5678;
pDblField = dblField + 10;
printf("dblField+10 = %f\n", *pDblField);

printf("dblField[10] = %f\n", dblField[10]);
system("cmd /C pause");

	
return 0;	
}