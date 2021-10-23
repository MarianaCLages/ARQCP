#include <stdio.h>
#include "compress_shorts.h"

int main(void) {
	
	short shorts[] = {1, 2, 3, 4, 5, 6};
	int n_shorts = 6;
	int integers[10];
	
	short *ptr1 = shorts;
	int *ptr2 = integers;
	
	compress_shorts(ptr1, n_shorts, ptr2);
	
	for(int i = 0; i < (n_shorts - (n_shorts / 2)); i++) {
		printf("Index: %d -> %d\n", i, *(ptr2 + i));
	}
	
	return 0;
}
