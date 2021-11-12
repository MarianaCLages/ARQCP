#include <stdio.h>
#include "concat.h"

char byte1 = 1;
char byte2 = 2;

int main(void) {
	short res = concatBytes();
	
	printf("After concatenation: 0x%04x\n", res);
	
	return 0;
}
