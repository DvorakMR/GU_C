#include <ansi_c.h>
int main(int argc, char *argv[])
{
unsigned int length = 20;
char input_buffer[length];
fgets(input_buffer, length, stdin);
if(input_buffer == NULL)
    printf("Error, input too long");
else
    printf("%s", input_buffer);

system("cmd /C pause");
return 0;
}