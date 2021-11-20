#include <stdio.h>
#include "asm.h"

int i = 4;
int a = 3;
int b = 3;

int main(void) {
	
long res = mulloop();
 
printf("sum = %ld\n", res);

return 0;

}

	
