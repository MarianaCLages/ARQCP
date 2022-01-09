#include <stdio.h>
#include "vec_search.h"

short* ptrvec;
int num;

short x;

int main(void) {
	short arr[] = {2, 4, 1, 5, 8, 6};
	ptrvec = arr;
	num = sizeof(arr)/sizeof(arr[0]);
	
	x = 4;
	
	short* vecres = vec_search();
	printf("Address of the word found = %p\n", vecres);
	
	return 0;
}
