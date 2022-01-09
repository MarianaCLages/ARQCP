#include <stdio.h>
#include "sum_n.h"

int main(void) {
	
	int n = 5;
	
	int sum = sum_n(n);
	
	if(sum != 0) {
		printf("Sum = %d\n", sum);
	} else {
		printf("Invalid 'n' number!\n");
	}
	
	return 0;
}
