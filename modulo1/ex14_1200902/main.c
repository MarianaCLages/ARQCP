#include <stdio.h>
#include "frequencies.h"

int main(void) {
	
	float grades[] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67,
16.23, 18.75};
	int n = 11;
	int freq[20];
	
	float *ptr = grades;
	int *ptr2 = freq;
	
	frequencies(ptr, n, ptr2);
	
	for(int i = 0; i <= 20; i++) {
		printf("%d -> %d\n", i, *(ptr2 + i));
	}
	return 0;
}
