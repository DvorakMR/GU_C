#include <stdio.h>

int main() {
	/* printf("Skriv ut..."); */
	// printf("Skriv */ ut...");
	printf("// Skriv ut...");
	//funkar inte -> printf(//"Skriv ut...");         
	printf(/* Skriv ut... */"");
	getchar();
	return 0;
}

