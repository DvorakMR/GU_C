#include <ansi_c.h>
int heltal = 10;
int *pekare_till_heltal = &heltal;
//Vilka av följande uttryck resulterar i en utskrift av talet 11? (och varför? Testa!)

int main() {
	printf("%i\n", pekare_till_heltal + 1); //adds 1(actually 4) to the adress value of pointer
	printf("%i\n", heltal+1);	// prints heltal+1=11
	printf("%i\n", *(&heltal)+1); //adress to "heltal" dereference and add 1 = value(adr=heltal)+1 = 11
	//printf("%i\n", *(pekare_till_heltal + 1)); pointer out of bounds e.g we are trying to point to something we do not know what it is
	printf("%i\n", *pekare_till_heltal + 1); //dereference the pointer and add 1 = 11
	printf("%i\n", &heltal + 1); //(adress of heltal)+1
	printf("%i\n", &heltal); //Something I added to prove a point about offset
	system("cmd /C pause");
return 0; }

// b) scanf needs a memory adress to store a value, you pass the memory adress and copy the value of input to that memory adress.