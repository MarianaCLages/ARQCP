#include <stdio.h>
#include "test_even.h"
#include "vec_sum_even.h"

long even;
int* ptrvec;
int num;

int main(void) {
	//test_even function output
	even = 4;
	
	int res = test_even();
	
	if(res == 1) {
		printf("The number is even\n");
	}
	
	if(res == 0) {
		printf("The number is odd\n");
	}
	
	//vec_sum_even function output
	int vec[] = {1, 2, 3, 4, 5, 6};
	ptrvec = vec;
	num = sizeof(vec) / sizeof(long);
	
	int sum = vec_sum_even();
	printf("Vec sum even = %d\n", sum);
	
	return 0;
}
