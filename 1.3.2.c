//	int a=1, b=2, c=3;
    //a) a&~b&~c = 0001 & 1101 & 1100 = 0000 = 0 (~ = bitwise not)
	//b) a & ~b & c = 0001 & 1101 & 0011 = 0001 = 1
	//c) a && ~b & c = 0001 and 1101 & 0011 = 1 & 0011 = 1 
	//d) a ^ b & c = bitwise XOR (^) = 0001 XOR 0010 & 0011 = 0011&0011 = 3
	//e) a & b ^ ~c = 0001 & 0010 ^ 1100 = 0000 0000 ^ 1111 1100 = 1111 1100 = -4 of 2s compliment (invert all bits and add 1)
	// or 252 in 8 bit unsigned
	//f) a | b & c = bitwise OR (|) = 0001 | 0010 & 0011 = 0011 & 0011 = 3

// 1.3.3
// (!(1==0)+(0==1)*1)+(1||1&&0)+(!1+1);
// (!0 + 0) + (1||0) +(0+1)		
//      1 + 1 + 1 = 3
/*
#include <ansi_c.h>
#include <stdio.h>

int main() {

	int a = (!(1==0)+(0==1)*1)+(1||1&&0)+(!1+1);
	printf("%d\n", a);
	system("cmd /C pause");
	return 0;
}
*/




