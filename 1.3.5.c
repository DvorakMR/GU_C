#include <ansi_c.h>
#include <stdio.h>

int main() {
	int payment = 0; //init the payment money var
	int cost = 1;  // --- 				cost var
	int bills[] = {1000,500,200,100,50,20,10,5,2,1}; //Face values of sweden
	//Check if payment is enough owise ask again
	while(payment < cost) {
		printf("Enter cost: ");
		scanf("%i", &cost);
		printf("\nEnter payed amount: ");
		scanf("%i", &payment);
		if (payment < cost) {
			printf("Cant afford\n");
		}
	}
	
	
	int diff = payment-cost;	//Total amount back
	printf("Back amount: %d\n", diff);
	int array_len = sizeof(bills)/sizeof(bills[0]); //length of bills
	
	int return_bills[array_len]; 	//init return money array
	
	//Iterate over the bills and calculate number of each face values
	for(int i=0; i<array_len; i++){
		return_bills[i] = diff/bills[i];	
		diff %= bills[i];
		printf("%d: %d\n",bills[i], return_bills[i]);
	}

	system("cmd /C pause");
	return 0;
}