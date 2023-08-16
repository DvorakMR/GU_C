#include <utility.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *dyn_str(){
	size_t capacity = 16; //init capacity
    size_t length = 0; // starting length
    char* data = malloc(capacity); //allocate a strting with size capacity
    data[0] = '\0'; // set first char to null terminator

    while (1) {
        char *new = data + length; // point at data pointer+length
        fgets(new, capacity - length, stdin); //stdinput into new, (LONGEST read buffer = capacity-length)
        length += strlen(new); // add length of input to length
        if (length + 1 == capacity) { 
            capacity *= 2; //resize by 2 if length is larger than capacity
            data = realloc(data, capacity);
        } else {
            break;
        }
    }
	data[length-1] = '\0'; //Remove newline char at last pos from standard input
	return data;
}