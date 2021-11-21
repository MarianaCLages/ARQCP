#include <stdio.h>
#include "asm.h"

int main(void) {
	
short res = crossSumBytes();
 
printf("sum = 0x%X\n", res);

return 0;

}
