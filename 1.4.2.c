
#include <ansi_c.h>
#include <stdio.h>
void dubblera(int x) {
	x = 2*x;
}

int dubblera2(int x) {
	x = 2*x;
	return x;
}

int main() {
	int some_value = 23;
	printf("Some value: %d\n", some_value);
	dubblera(some_value);
	printf("Some value after fcall: %d\n", some_value); 
	some_value = dubblera2(some_value);
	printf("Some value with resonable function: %d\n", some_value); 
	system("cmd /C pause");
	return 0;
}