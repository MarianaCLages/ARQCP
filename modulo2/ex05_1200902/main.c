#include <stdio.h>
#include "swap.h"

short s = 0xABCD;
short byte1 = 1;
short byte2 = 2;

int main(void) {
	short res = swapBytes();
	short res2 = concatBytes();
	
	printf("After swap: 0x%04x\n", res);
	printf("After concatenation: 0x%04x\n", res2);
	
	return 0;
}
