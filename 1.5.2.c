#include <ansi_c.h>
void ClearScreen() //adds alot of newlines to flush the cmd window
    {
    int n;
    for (n = 0; n < 15; n++)
      printf( "\n\n" );
    }

int main() {
	char text[] = "Gothenburg";
	char *my_pointer = text;
	char *first_ele = text;
	int text_size = sizeof(text)-2;
	char *last_ele = text;
	last_ele += text_size;
	int choice = 0;
	while(choice != 4) {
		ClearScreen();
		printf("String is: %s\n", text);
		printf("Pointer is pointing at %c\n", *my_pointer);
		printf("1) Add 1 to pointer\n");
		printf("2) Minus 1 to pointer\n");
		printf("4) Avsluta programmet\n"); 
		if(scanf("%i", &choice) == 1) { //Checks return value of scanf
			//do nothing :)
		}
		else {
			printf("%d", choice);
			choice = 0; // fix if user input float
		}

		switch (choice)
		{
			case 1:
				if (my_pointer == (last_ele)){
					printf("Cant inc outside array\n");
					system("cmd /C pause");
				}
				else{
					my_pointer++;	
				}
				break;
			case 2:
				if (my_pointer == (first_ele)){
					printf("Cant dec outside array\n");
					system("cmd /C pause");
				}
				else{
					my_pointer--;	
				}
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
	return 0;
	}