/*Skriv ett program med en funktion som skifta (eller flytta) ett teckenlöst heltal (unsigned int) ett
antal steg åt vänster. Båda ges som indata. Givet två tal, x och y, så skall bitarna i x flyttas y platser
åt vänster, och bitarna som förloras till vänster hamna till höger. D.v.s., bitarna som hamnar utanför
de mest signifikanta placeras i de minst signifikanta positionerna.*/
#include <ansi_c.h>
#include <stdio.h>
#define INT_BITS 32
#define print_bits(x)                                            \
  do {                                                           \
    unsigned long long a__ = (x);                                \
    size_t bits__ = sizeof(x) * 8;                               \
    printf(#x ": ");                                             \
    while (bits__--) putchar(a__ &(1ULL << bits__) ? '1' : '0'); \
    putchar('\n');                                               \
  } while (0)

int leftRotate(int x, unsigned int y)
{
   return (x << y)|(x >> (INT_BITS - y));	//1011 0000 <<3 = 1000 0000
	//overflow bits 1011 0000 shifted right by inverse = 0000 1101
	// 1000 0000 or 0000 1101 = 1000 1101 (or to remove any trailing 1's already accounted for in leftshift)
}



int main() {
	
	int x = 2147483647/4;
	int y= 37;
	print_bits(x);
	unsigned int z = leftRotate(x,y);
	print_bits(z);
	system("cmd /C pause");
	return 0;
}
