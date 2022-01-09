#include <stdio.h>
#include "sum_smaller.h"

int main(void) {
	
	int num1 = 2;
	int num2 = 3;
	
	int* smaller;
	
	int sum = sum_smaller(num1, num2, smaller);
	printf("Sum = %d\n", sum);
	
	printf("Smaller = %d\n", *smaller);
	
	return 0;
}
