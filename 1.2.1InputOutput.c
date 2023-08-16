#include <ansi_c.h>
#include <stdio.h>

int main() {
	 
	int number;
	printf("Input integer: ");
	
	if(scanf("%i", &number) == 1) { //Checks return value of scanf
		number = number*2;
		printf("number*2 = %i", number);
	}
	else {
		printf("Number not integer.");
	}
	system("cmd /C pause");
    return 0;
}
