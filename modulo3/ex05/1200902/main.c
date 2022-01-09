#include <stdio.h>
#include "vec_sum.h"
#include "vec_avg.h"

int* ptrvec;
short num;
int sum;

int main(void) {
	int arr[] = {1, 2, 3, 4};
	ptrvec = arr;
	num = sizeof(arr) / sizeof(int);
	
	sum = vec_sum();
	printf("Vector sum = %d\n", sum);
	
	int avg = vec_avg();
	printf("Vector average = %d\n", avg);

	return 0;
}
