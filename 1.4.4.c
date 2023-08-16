/*Skriv ett program med en funktion som skifta (eller flytta) ett teckenl�st heltal (unsigned int) ett
antal steg �t v�nster. B�da ges som indata. Givet tv� tal, x och y, s� skall bitarna i x flyttas y platser
�t v�nster, och bitarna som f�rloras till v�nster hamna till h�ger. D.v.s., bitarna som hamnar utanf�r
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
