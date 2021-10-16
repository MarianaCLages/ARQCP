#include <stdio.h>
#include "array_sort1.h"

int main(void) {
	
	int vec[] = {1, 6, 2, 7, 8, 3};
	int n = 6;
	array_sort1(vec, n);
	
	printf("Ordered vector: \n");
	for(int i = 0; i < n; i++) {
		printf("%d\n", vec[i]);
	}
	return 0;
}
