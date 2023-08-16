#include <stdio.h>
#include <utility.h>
#include <string.h>
#include <assert.h>
int main() {
// This pointer will hold the base sentence
char *word_list = malloc(sizeof(*word_list)*100);
if (fgets(word_list, 100, stdin) == NULL ) { //fgets will only take given len of values
	    	printf("Error in input, somehow...");
			//End of buffer
		}
	printf("Words: %s", word_list);
	
	int i = 0;
	printf("Enter number of words to split\n");
	
	int n;
	assert(scanf("%d", &n) == 1);
	
	char *token = strtok(word_list, " ");
	char **arr_word_ptr = malloc(sizeof(arr_word_ptr)*n);
	while(token != NULL && i < n) {
		arr_word_ptr[i] = malloc(strlen(token) + 1);
      	strcpy(arr_word_ptr[i],token);
		token = strtok(NULL, " ");
      	i++;
   }
   for(int j = 0; j < i; j++){
	   printf("%s\n", arr_word_ptr[j]);
	   free(arr_word_ptr[j]);
   }
   free(arr_word_ptr);
	while(!KeyHit());
	return 0;
	
}

