#include <stdio.h>
#include "asm.h"

short s1 = 0xA1B1;
short s2 = 0x1199;

int main(void) {
	
short res = crossSumBytes();
 
printf("sum = 0x%X\n", res);

return 0;

}
