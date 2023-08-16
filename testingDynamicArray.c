#include "dyn_str.h"

int main() {
	char** strs = malloc(sizeof(strs)*4);;
	for(int i = 0; i <4; i++) {
		
		strs[i] = dyn_str();
	
	}
	for(int i = 0; i<4; i++){
		printf("%s", strs[i]);	
	}
	while(!KeyHit());
    free(strs);
}