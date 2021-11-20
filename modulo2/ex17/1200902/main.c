#include <stdio.h>
#include "calculator.h"

int a = 10;
int b = 3;

int main(void) {
	int res = sum();
	printf("Sum: %d\n", res);
	
	res = subtraction();
	printf("Subtraction: %d\n", res);
	
	res = multiplication();
	printf("Multiplication: %d\n", res);
	
	res = division();
	printf("Division: %d\n", res);
	
	res = modulus();
	printf("Modulus: %d\n", res);
	
	res = power2();
	printf("Power of 2: %d\n", res);
	
	res = power3();
	printf("Power of 3: %d\n", res);
	
	return 0;
}
