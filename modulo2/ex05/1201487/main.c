#include <stdio.h>
#include "asm.h"

short s=0xAABB;

int main(void) {
	
short res = swapBytes();
 
printf("sum1 = 0x%X\n", res);

return 0;

}
