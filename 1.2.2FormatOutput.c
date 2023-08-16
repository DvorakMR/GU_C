#include <ansi_c.h>
#include <stdio.h>

int main() {
	int P;
	int Q;
	scanf("%i%i", &P, &Q);
	float divPQ = (float)P/Q;
	int modulPQ = P%Q;
	float sciPQ = P*Q;
	
	printf("%X\n", P); //prints HEX
	printf("%.3f\n", divPQ); // 3 points decimal
	printf("%d\n", modulPQ); // prints modulo answer
	printf("%e\n", sciPQ); // prints scientific notation
	printf("%09d\n", Q); // prints with 0 padding
	system("cmd /C pause");
	
	return 0;
}