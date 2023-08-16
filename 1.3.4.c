#include <ansi_c.h>
#include <stdio.h>

 void ClearScreen() //adds alot of newlines to flush the cmd window
    {
    int n;
    for (n = 0; n < 15; n++)
      printf( "\n\n" );
    }

int main() {
	int number = 0;
	int choice = 0;
	
	while(choice != 4) {
		ClearScreen();
		printf("Talet \x84r %d, v\x84lj en operation:\n", number);
		printf("1) Addera 1\n");
		printf("2) Multiplicera med 2\n");
		printf("3) Subtrahera 3\n");
		printf("4) Avsluta programmet\n"); 
		if(scanf("%i", &choice) == 1) { //Checks return value of scanf
			//do nothing :)
		}
		else {
			printf("%d", choice);
			choice = 0; // fix if user input float
		}
		modf(floating, &integer)
		switch (choice)
		{
			case 1:
				number++;
				break;
			case 2:
				number *= 2;
				break;
			case 3:
				number -= 3;
				break;
			case 4:
				printf("Programmet avslutas\n");
				break;	
			default:
				fflush(stdin);
				fflush(stdin);
				break;
		}	
	}
	system("cmd /C pause");
	return 0;
}