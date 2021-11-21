#include <stdio.h>
#include "swap.h"

int main(void) {
	
	int vec1[] = {1, 2, 3, 4};
	int vec2[] = {5, 6, 7, 8};
	int size = 4;
	
	int *ptr1 = vec1;
	int *ptr2 = vec2;
	
	swap(ptr1, ptr2, size);
	
	printf("Vector 1 after swap:\n");
	for(int i = 0; i < size; i++) {
		printf("%d\n", vec1[i]);
	}
	
	printf("\nVector 2 after swap:\n");
	for(int i = 0; i < size; i++) {
		printf("%d\n", vec2[i]);
	}
}
