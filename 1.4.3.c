#include <ansi_c.h>
#include <stdio.h>
void date_input(int *yp, int *mop, int *dp, int *hp, int *mip, int *sp) {
	int length = 21; //init array length
	char dateArray[length]; //init date/time array
	*yp = -1; //change value of year to -1
	while(*yp >= 10000 || *yp <= -1){
		*yp=-1, *mop=0, *dp=0, *hp=61, *mip=61, *sp=61; //debug values (eg. cant be year -1 or 61 seconds in)
		printf("Enter date and time formatted \"YYYY-MM-DD_HH:MM:SS\"\n");
		if (fgets(dateArray, length, stdin) == NULL ) { //fgets will only take arraylength of values
	    	printf("Error in input, somehow...");
			//End of buffer
		}
		if(sscanf(dateArray, "%d-%d-%d_%d:%d:%d",&*yp,&*mop,&*dp,&*hp,&*mip,&*sp) == 0) { //split the string into vars for year, month...
			printf("Wrong format try again\n"); //if something goes wrong again
		}
		
		//check if months, days, hours, min, sec are inbound valid ranges
		if((*mop<1 || *mop>12) || (*dp<1 || *dp>31) || (*hp<0 || *hp>23) || (*mip>60 || *mip<0) || (*sp>60 || *sp<0)){ 
			printf("time out of bounds or wrong format\n");
			*yp = -1; //keep looping for new input
		}
		//special cases for days with 30 and 28 days
		if((((*mop%2==0 && *mop <8 && *mop>0) || (*mop%2==1 && *mop>7)) && *dp>30) || (*mop==2 && *dp>28)){
			printf("There is only 30 ds in m number %d\n", *mop);
			*yp = -1; //keep looping for new input
			}
		}
		
	}

int date_to_seconds(int *dates) {
	int month_array[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int days = *(dates+2);
	for(int i = 0; i<*(dates+1); i++) { //translate month to days
		days += month_array[i];
	}

	//int seconds1 = *(dates1+3*offset) + *(dates1+2*offset)*60 + *(dates1+1*offset)*3600;
	//seconds1 += *(dates1+1*offset)*24*3600 + *(dates1)*365*24*3600;
	return *(dates+5) + *(dates+4)*60 + *(dates+3)*3600 + days*24*3600 + *(dates)*365*24*3600;
}

int * date_time_splitter(int *seconds, int *start_month){
	int day_seconds = 24*3600;
	int month_array[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	int days = *seconds/day_seconds;
	int time_rest = *seconds%day_seconds;
	
	int years = days/365;
	days %= 365;
	int months = 0;
	int next_days = 32;
	while(days>next_days){
		days -= month_array[*start_month+months];
		months++;
		next_days = month_array[*start_month+1];
	}
	
	int hours = time_rest/3600;
	time_rest %= 3600;
	int minutes = time_rest/60;
	int rest_seconds = time_rest%60;
	int diff_divided_time[6] = {years, months, days, hours, minutes, rest_seconds};
	return diff_divided_time;
}

int main() {
	int y=10000, mo=0, d=0, h=61, mi=61, s=61; 			//init values for year, month, day, hour, minute, second
	printf("For the first date and time\n");  	
	date_input(&y,&mo,&d,&h,&mi,&s);					//pass pointers of year, month, ... , second to date_input()
	int date_array1[6] = {y,mo-1,d-1,h,mi,s};			// modified
	int month1 = date_array1[1];						//save month1 for use later on
	printf("For the second date and time, again,\n");
	date_input(&y,&mo,&d,&h,&mi,&s);
	int date_array2[6] = {y,mo-1,d-1,h,mi,s};
	int month2 = date_array2[1];						//save month2 for use later on
	int sec_since_zero1 = date_to_seconds(date_array1);
	int sec_since_zero2 = date_to_seconds(date_array2);
	int diff_in_seconds;
	int *date_return_split; 							//pointer to return value
	//if-else to for which date is first
	if(sec_since_zero1 < sec_since_zero2) {
		diff_in_seconds = sec_since_zero2-sec_since_zero1;
		date_return_split = date_time_splitter(&diff_in_seconds, &month1);
	}	
	else {
		diff_in_seconds	= sec_since_zero1-sec_since_zero2;
		date_return_split = date_time_splitter(&diff_in_seconds, &month2);
	}
	printf("Time difference in seconds: %d\n", diff_in_seconds);
	printf("Time difference in\n");
	printf("Years: %d\n", *date_return_split);
	printf("Months: %d\n", *(date_return_split+1));
	printf("Days: %d\n", *(date_return_split+2));
	printf("Hours: %d\n", *(date_return_split+3));
	printf("Minutes: %d\n", *(date_return_split+4));
	printf("Seconds: %d\n", *(date_return_split+5));
	
	system("cmd /C pause");
	
	return 0; 
}
