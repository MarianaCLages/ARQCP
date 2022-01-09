#include <stdio.h>
#include "vec_add_one.h"

long* ptrvec;
int num;

int main(void) {
	
	long arr[] = {1, 2, 3, 4};
	ptrvec = arr;
	num = sizeof(arr) / sizeof(long);
	
	vec_add_one();
	
	for(int i = 0; i < num; i++) {
		printf("vector[%d] = %ld\n", i, arr[i]);
	}
	
	return 0;
}
