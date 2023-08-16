#include "dyn_str.h"
#define NUMBER_OF_STRINGS 11
int cmplen(const void *p1, const void *p2) { //takes to constant(cannot change address) general purpose pointers
    size_t len1 = strlen(*(const char **) p1); //saves length of p1
    size_t len2 = strlen(*(const char **) p2); //-------¨------- p2
    if (len1 < len2) return -1; //compare length if first string is shorter return something<0
    if (len1 > len2) return  1; //longer; return something>0
    
	//checks which nonmatching is greater (in ASCII) and
	//and returns accordingly with >0,<0
	return strcmp(*(const char **) p1, *(const char **) p2); 
}

int num = 4;

int main() {
	char** strs = malloc(sizeof(strs)*num);; //allocate size of pointer*number of elements
	
	for(int i = 0; i <num; i++) { //insert pointers in strs to strings allocated dynamically
		strs[i] = dyn_str();
	}
	//qsort(data, number of data, size of elements, function)
	qsort(strs, num, sizeof(strs[0]), cmplen);
	//The function cmplen will determine pairwise which is higher in order
	
	//print the indivdual values and free them
	for(int i = 0; i<num; i++){
		printf("%s\n", strs[i]);
		free(strs[i]);
	}
	free(strs);
	while(!KeyHit());

	return 0;
}