#include <stdio.h>
#include "odd_sum.h"

int main(void) {
	
	int arr[] = {4, 1, 2, 3};
	int *p = arr;
	printf("Odd sum = %d\n", odd_sum(p));
}
