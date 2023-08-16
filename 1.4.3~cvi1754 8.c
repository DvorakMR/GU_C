#include <ansi_c.h>
#include <stdio.h>

void date_input(int *year, int *month, int *day, int *hour, int *minute, int *second) {
	int length = 21;
	char dateArray[length];
	while(year >= 10000 || year <= -10000){
		&year=10000, &month=0, &day=0, &hour=61, &minute=61,&second=61;
		printf("Enter date and time formatted \"YYYY-MM-DD_HH:MM:SS\"\n");
		if (fgets(dateArray, length, stdin) == NULL ) {
	    	printf("Error in input, somehow...");
			//End of buffer
		}
		if(sscanf(dateArray, "%d-%d-%d_%d:%d:%d",&year,&month,&day,&hour,&minute,&second) == 0) {
			printf("Wrong format try again\n");
		}
		if((&month<1 || &month>12) || (&day<1 || &day>31) || (&hour<0 || &hour>23) || (&minute>60 || &minute<0) || (&second>60 || &second<0)){
			printf("time out of bounds\n");
			year = 10000;	
		}
		if(((&month%2==0 && &month <8 && &month>0) || (&month%2==1 && &month>7)) && day>30){
			printf("There is only 30 days in month number %d\n", month);
			year = 10000;
			}
		}
		
	}


int main() {
	int date_time[] =  {date_input()};
	
	for(int i = 0; i<5; i++) {
	printf("%d\n", date_time[i]);
	}
	system("cmd /C pause");
	
	
	return 0; }