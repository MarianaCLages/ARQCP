#include <stdio.h>
#include "count_even.h"

int main(void) {
	
	short* vec;
	short vector[] = {1, 4, 7, 8, 10};
	vec = vector;
	int n = sizeof(vector) / sizeof(vector[0]);
	
	int res = count_even(vec, n);
	printf("Count even = %d\n", res);
	
	return 0;
}
