#include <stdio.h>

int main() {
	
	int x = 5;
	int* xPtr = &x;
	float y = *xPtr + 3;
	int vec[] = {10, 11, 12, 13};
	
	printf("Value of x: %d", x);
	printf("\nValue of y: %f", y);
	
	printf("\n\nAddress of x: %p", &x);
	printf("\nAddress of xptr: %p", &xPtr);
	
	printf("\n\nValue pointed by xptr: %hhd", *xPtr);
	
	printf("\n\nAddress of vec: %p", &vec);
	
	printf("\n\nValue:  vec[0] = %d, vec[1] = %d, vec[2] = %d, vec[3] = %d", vec[0], vec[1], vec[2], vec[3]);
	printf("\n\nAddress:  vec[0] = %p, vec[1] = %p, vec[2] = %p, vec[3] = %p\n", &vec[0], &vec[1], &vec[2], &vec[3]);
	
	return 0;
}
