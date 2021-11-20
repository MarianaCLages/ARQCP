#include <stdio.h>
#include "asm.h"

short s=0xAABB;
char byte1 = 0xCC;
char byte2 = 0xDD;

int main(void) {
	
short res = swapBytes();
 
printf("sum1 = 0x%X\n", res);

res = concatBytes();

printf("sum2 = 0x%X\n", res);

return 0;

}
