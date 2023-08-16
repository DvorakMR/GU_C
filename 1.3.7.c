#include <ansi_c.h>
#include <stdio.h>
#include <time.h>

//Rock paper scissor
int main()
{	
	int choice = 4;
	srand(time(NULL));   // Initialization (new randow every run), should only be called once.
	while(choice != 1 && choice !=2 && choice !=3){	//while loop for choices
		printf("Rock Paper Scissor game\n");
		printf("1) Rock\n2) Paper\n3) Scissor\n");
		scanf("%i", &choice);
		if(choice != 1 && choice !=2 && choice !=3){
			fflush(stdin);		//flush the input 2x to not bug out if input is evil chars
			fflush(stdin);
			printf("invalid choice\n");	
		}
	}
	int cpu_choice = rand() % 3; //0 = rock, 1 = paper, 2=scissor (CPU rand generation)

	if(cpu_choice == 0){
		printf("Computer chose Rock\n");
	}
	else if(cpu_choice == 1){
		printf("Computer chose Paper\n");
	}
	else {
		printf("Computer chose Scissor\n");
	}
	
	choice--; //to make if-logic easier for draws (1,2,3 -> 0,1,2).
	if((choice == 0 && cpu_choice == 2) || (choice == 1 && cpu_choice == 0) | (choice == 2 && cpu_choice == 1)) { //All win scenarios
		printf("You Win!\n");
	}
	else if(choice == cpu_choice) { // All draw scenarios
		printf("Draw...\n");	
	}
	else {	//not win or not draw scenarios (=Lose)
		printf("You Lose\n");	
	}	
	
	system("cmd /C pause");
	return 0;	
}