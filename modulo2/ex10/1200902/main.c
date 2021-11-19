#include <stdio.h>
#include "sum2ints.h"

int op1 = 10;
int op2 = 15;

int main(void) {
	long long res = sum2ints();
	
	printf("Sum2ints: %lld\n", res);
	
	return 0;
}
