#include <utility.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER 40000

void read_words (FILE *f) {
    char x[1024];
	char word[] = "John";
	int position = 0;
    /* assumes no word exceeds length of 1023 */
    while (fscanf(f, " %1023s", x) == 1) {
		printf("%s\n", x);
		if(strcmp(x,word)==0){
			position = ftell(f);
			//printf("Match found at %d bytes in\n", position+1-(sizeof(word)/sizeof(word[0])));
		}
    }
}
int main () {
  FILE *file_ptr = fopen ("text", "r");
  read_words(file_ptr);
  while(!KeyHit());
	return 0; 
}
