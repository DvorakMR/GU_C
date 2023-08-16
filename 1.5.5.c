#include <utility.h>
#include <ansi_c.h>

int main() {
	char array1[] = {'1','2','3'}; 
	char array2[] = {'a','b','c'};
	int size1 = sizeof(array1)/sizeof(array1[0]); //size of array1
	int size2 = sizeof(array2)/sizeof(array2[0]); //size of array2
	int size3 = size1+size2; //combined size of array1,2
	char array3[size3]; //init array3 with "size3"
	for(int i = 0; i < size1; i++){
		array3[i*2] = array1[i]; //Insert at even
		array3[(i*2+1)] = array2[i]; //Insert at uneven
	}
	printf("Part a)\n");
	printf("%s\n", array3);
	

	//END OF PART1
	
	int array4[] = {1,2,6,9};
	int array5[] = {3,4,5,7};
	int size4 = sizeof(array4)/sizeof(array4[0]); //size of first number array
	int size5 = sizeof(array5)/sizeof(array5[0]); //size of second number array
	int size6 = size4+size5; //combined size of number arrays (size6)
	int array6[size6]; //init array6 with "size6"
	int j = 0; //iterator j
	int k = 0; //iterator k
	
	//DISCLAIMER:::THIS ONLY WORKS IF LISTS ARE ORDERED INDIVDUALLY
	//(because then we know we wont find smaller elements later in the 2 arrays :) )
	for(int i = 0; i < size6; i++){ 
		if (array4[j] <= array5[k]) { //if array4 value is less than array5
			array6[i] = array4[j]; //insert array4 value into array6
			if (j<(size4-1)) j++; //keep increasing j to iterate over all numbers in array4
		}
		else { //array5>array4
			array6[i] = array5[k]; //insert array5's value into array6
			if (k<(size5-1)) k++; //inc k to iterate over all numbers in array5
		}
	}
	printf("\npart b)\n");
	for(int i = 0; i < size6; i++){
		printf("%d ", array6[i]);
	}
	while(!KeyHit());
	return 0;	
}

