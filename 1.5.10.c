#include <ansi_c.h>
#include <utility.h>

#define NUMBER 5
int sum()
{
	unsigned int res = (NUMBER*(NUMBER+1))/2;
	return res;
}
int prod_sum()
{
    unsigned int res = 1;
	for(int i = 1; i<=NUMBER; i++) res *= i;
	return res;
}
int sum_prodsum()
{
    unsigned int res;
	res = prod_sum();
	res = (res*(res+1))/2;
	return res;
}


int main() {
	
	int (*ipFunks [3] ) (void) = {sum, prod_sum, sum_prodsum};
	unsigned int a = NUMBER;
	
	printf("Prechosen value is %i\n", a);
	printf("0) Sum from 1 to %i\n",a);
	printf("1) Product sum from 1 to %i\n",a);
    printf("2) Sum from 1 to (Product sum from 1 to %i)\n\n",a);
	
	for(int i=0; i <3; i++){
		printf("%u) Result: %d\n",i,(*ipFunks[i])());
	}
	while(!KeyHit());
	return 0;	
	
}
