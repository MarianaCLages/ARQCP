#include <stdio.h>
#include "inc_and_square.h"

int main(void) {	
	int* v1;
	int a = 10;	
	v1 = &a;
	
	int v2 = 3;
	
	printf("Increment of *v1 = %d\n", *v1);
	
	int square = inc_and_square(v1, v2);
	printf("v2 squared = %d\n", square);
	
	return 0;
}
