#include <stdio.h>
#include "asm.h"

char A = 1;
short B = 100;
int C = 3000;
int D = 3000;

int main(void) {
	
 int res = sum_and_subtract();
 
 printf("sum = %d\n", res);

return 0;

}
