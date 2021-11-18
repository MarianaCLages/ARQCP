#include <stdio.h>
#include "asm.h"

int varA = 10;
int varB = 20;

int main(void) {
	
int res = sum();
 
printf("sum = %d\n", res);

res = subtraction();
 
printf("sum = %d\n", res);

res = multiplication();
 
printf("sum = %d\n", res);

res = divison();
 
printf("sum = %d\n", res);

res = modulus();
 
printf("sum = %d\n", res);

res = powers2();
 
printf("sum = %d\n", res);

res = powers3();
 
printf("sum = %d\n", res);

return 0;

}

	
