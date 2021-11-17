#include <stdio.h>
#include "asm.h"

int varA = 3000;
int varB = 3000;

int main(void) {
	
 long res = sum2ints();
 
 printf("sum = %ld\n", res);

return 0;

}
