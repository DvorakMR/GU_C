#include <ansi_c.h>
#include <utility.h>
#include <h_my_dll1.h>
int main() {
printf("Programstart\n");
my_dll1(); // call the function defined in dll1
my_dll2(); // fun in dll2
while(!KeyHit());
return 0;
}