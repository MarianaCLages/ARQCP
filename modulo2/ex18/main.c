#include <stdio.h>
#include "asm.h"

int i = 4;

int main(void) {
	
long res = mulloop();

int quocient = (int) res;

int remainder = (res & 0xFFFFFFFF00000000);

printf("remainder = %d\n", remainder);

if(remainder!=0) printf("remainder = %d\n", quocient/remainder);
 
printf("sum = %ld\n", res);

return 0;

}

	
