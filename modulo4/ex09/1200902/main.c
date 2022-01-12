#include <stdio.h>
#include "print_result.h"
#include "calculate.h"

int main(void) {
	int a = 2;
	int b = 3;
	
	int calc = calculate(a, b);
	printf("(a+b)-(a*b) = %d\n", calc);
	
	return 0;
}
