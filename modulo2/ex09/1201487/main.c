#include <stdio.h>
#include "asm.h"

char varA = 1;
short varB = 100;
int varC = 3000;
int varD = 3000;

int main(void) {
	
 int res = sum_and_subtract();
 
 printf("sum = %d\n", res);

return 0;

}
