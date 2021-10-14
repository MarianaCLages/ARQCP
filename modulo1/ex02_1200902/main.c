#include <stdio.h>
#include "copy_vec.h"

int main() {
	
	int vec1[] = {1, 2, 3, 4};
	int vec2[] = {5, 6, 7, 8};
	
	printf("\nVector 1 values: {%d, %d, %d, %d}", vec1[0], vec1[1], vec1[2], vec1[3]);
	printf("\nVector 2 values: {%d, %d, %d, %d}\n\n", vec2[0], vec2[1], vec2[2], vec2[3]);
	
	copy_vec(vec1, vec2, sizeof(vec1) / sizeof(int));
	printf("Vec2 after copying: \n");
	print_array(vec2, sizeof(vec2) / sizeof(int));
	
	return 0;
}
