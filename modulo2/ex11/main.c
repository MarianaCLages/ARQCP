#include <stdio.h>
#include "asm.h"

int varA = 2147483648;
int varB = 2147483648;

int main(void) {
	
 char res = test_flags();
 
 printf("sum = %hhd\n", res);

return 0;

}
