#include <stdio.h>
#include "count_bits_zero_c.h"
#include "count_bits_zero.h"
#include "vec_count_bits_zero.h"

int main(void) {
	
	int x = 1;
	
	// C
	int res = count_bits_zero_c(x);
	printf("Count bits zero (C)= %d\n", res);
	
	// Assembly
	int res2 = count_bits_zero(x);
	printf("Count bits zero (Assembly)= %d\n", res2);
	
	// Vec count bits zero
	
	int vec[] = {1, 1};
	int* ptr = vec;
	int num = sizeof(vec)/sizeof(vec[0]);
	
	int res3 = vec_count_bits_zero(ptr, num);
	printf("Vec count bits zero = %d\n", res3);
	
	return 0;
}
