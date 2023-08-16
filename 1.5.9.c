#include "dyn_str.h"

void print_header(){
	printf("Results:\n");
   for(int i = 0; i<20; i++){
	   printf("--");
	}
	printf("\n");
}

void print_palindrom(int x){
	
	if(x == 0) {
		printf("\t\t inte palindrom\n");
		return;
	}
	printf("\t\t PALINDROM!\n");
	return;
}	

void is_palindrome(char *str)
{
    int l = 0; //low "char" = 0
    int h = strlen((const char *)str) - 1; // high "char" = len-1
 
    // Keep checking until some character is not same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%-20s",str);
			print_palindrom(0);
            return;
        }
    }
    printf("%-20s", str);
	print_palindrom(1);
}

int main() {
	int n = 10; //test 10 first words
	char *text_str = dyn_str(); //get a textstring
	
	char **arr_word_ptr = malloc(sizeof(arr_word_ptr)*n); //make an array to words of textstring
	char *token = strtok(text_str, " "); //initialize token
	int i = 0; // init i
	while( token != NULL && i < n) { // cont. aslong string has not ended or numb word = 10
        arr_word_ptr[i] = token; //copy adress to i:th word to array
		token = strtok(NULL, " "); //token = next element
      	i++;
   }
  	
   	print_header();
	printf("Detta är modifierat: %s\n",text_str);
	for(int j = 0; j < i; j++){
		printf("%s\n", arr_word_ptr[j]);   
   }
    for(int j = 0; j < i; j++){
		is_palindrome(arr_word_ptr[j]);
   }
	free(arr_word_ptr);
	free(text_str);

	while(!KeyHit());
	return 0;
}

