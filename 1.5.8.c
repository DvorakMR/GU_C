#include <utility.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dyn_readinput()
{
	int CHUNK = 10;
	int i = 0;
	char *input = NULL;
	char buffer[CHUNK];
	size_t inputlen = 0, templen = 0;
   do {
	   fgets(buffer, CHUNK, stdin); //reads #chunk chars from stdin
       printf("%s\n",buffer);
	   templen = strlen(buffer); //saves number of chars to know if CHUNK is larger
	   input = realloc(input, inputlen+templen+1); //realloc input to old length+number in buffer+1
       strcpy(input+inputlen, buffer); //copy buffer to end of input
       inputlen += templen; //add length of buffer to inputlen
    } while (templen==CHUNK-1 && buffer[CHUNK-2]!='\n'); //continue if chunk is filled and last char is not '\n'
    return input;
}

int main()
{
    char *result = dyn_readinput();
    printf("And the result is: %s \n", result);
    free(result);
	while(!KeyHit());
    return 0;
}
	
