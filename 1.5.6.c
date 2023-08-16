#include <ansi_c.h>


void uninterleave(char *s, char **ret1, char **ret2) {
	size_t len1 = strlen(s)/2;
	size_t len2 = strlen(s) - len1;
	char *str1, *str2;
	str1 = malloc(len1 + 1);
	str2 = malloc(len2 + 1);
	
	for(int i = 0; i < len1; i++){
		str1[i] = s[2*i];
	}
	str1[len1] = '\0';
	
	for(int i = 0; i < len2; i++){
		str2[i] = s[2*i+1];
	}
	str2[len2] = '\0';
	
	*ret1 = str1;
	*ret2 = str2;
}

int main()
{
  	char *string;
	int c = 0;
  	int index = 0, i = 1;
  	string = malloc(sizeof(*string));
	printf("Enter a string: ");
  
	while (c != '\n') {
	    // read the input from standard input
	  	c = getc(stdin);
	    // reallocate memory for character to be stored
	  	string = realloc(string, (i+1) * sizeof(*string));
	    // store read character by making pointer point to c
	  	string[index] = (char)c;

		index++;
		i++;
	}

  	string[index] = '\0'; //append null char @ end of string
	char *ui_str1, *ui_str2; //create 2 pointers to 2 strings
 	printf("Entered string: %s\n", string);
	uninterleave(string, &ui_str1, &ui_str2); //pass stringpointer and adress to split strings
	
	printf("%s\n", ui_str1);
	printf("%s\n", ui_str2);
	free(string);
	free(ui_str1);
	free(ui_str2);
	system("cmd /C pause");
	return 0;
}