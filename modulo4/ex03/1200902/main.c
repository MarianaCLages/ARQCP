#include <stdio.h>
#include "greatest.h"

int main(void) {
	
	int a = 1;
	int b = 2;
	int c = 3;
	
	int num = greatest(a, b, c);
	
	printf("The greatest number is %d\n", num);
	
	return 0;
}
