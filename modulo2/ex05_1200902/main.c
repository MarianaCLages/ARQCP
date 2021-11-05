#include <stdio.h>
#include "swap.h"

short s = 0xABCD;

int main(void) {
	short res = swapBytes();
	
	printf("After swap: %0x\n", res);
	
	return 0;
}
