#include <stdio.h>
#include "asm.h"

int i = 4;
int a = 1;
int b = 2;

int main(void) {
	
long res = mulloop();
 
printf("sum = %ld\n", res);

return 0;

}

	
