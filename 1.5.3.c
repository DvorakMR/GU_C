 #include <ansi_c.h>
int a[] = {1,2,3,4};
char b[] = {'a','b','c','d'};
double c[] = {1,2,3,4};
int (*ptr1)[] = &a;
char (*ptr2)[] = &b;
double (*ptr3)[] = &c;



int main() {
	for(int i = 0; i <4; i++){
		printf("%d) integer pointer: %d\n", i,&ptr1+i);
		printf("%d) char pointer: %d\n", i,&ptr2+i);
		printf("%d) double pointer: %d\n\n", i,&ptr3+i);
	}
	int diff1 = ((int)(&ptr1+2)-(int)(&ptr1+1));
	int diff2 = ((int)(&ptr2+2)-(int)(&ptr2+1));
	int diff3 = ((int)(&ptr3+2)-(int)(&ptr3+1));
	int *int_ptr1;
	char *char_ptr2;
	double *double_ptr3;
	printf("Integer difference between 3-2: %d\n", diff1 );
	printf("Char difference between 3-2: %d\n", diff2 );
	printf("Double difference between 3-2: %d\n", diff3 );
	printf("size of a pointer: %d, %d, %d\n", sizeof(int_ptr1), sizeof(char_ptr2), sizeof(double_ptr3));
	system("cmd /C pause");
	return 0;
}
