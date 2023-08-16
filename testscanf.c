#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char buffer[100];
    double value;
    char *endptr;
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        return -1; /* Unexpected error */
    value = strtod(buffer, &endptr);
    if ((*endptr == '\0') || (isspace(*endptr) != 0))
        printf("It's float: %f\n", value);
    else
        printf("It's NOT float ...\n");
		system("cmd \C pause");
} 