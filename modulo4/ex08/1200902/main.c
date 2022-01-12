#include <stdio.h>
#include "calc.h"

int main(void) {
	int a = 2;
	int b = 3;
	int c = 4;

	int* ptr = &b;
	
	int res = calc(a, ptr, c);
	printf("Calc = %d\n", res);
	
	return 0;
}
