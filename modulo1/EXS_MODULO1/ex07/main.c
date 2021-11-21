#include <stdio.h>
#include "array_sort_1.h"

int main(){

	int vec[] = {2, 3, 1, 1, 4, 5, 6, 7, 8, 9, 2};
	
	int size = sizeof(vec)/sizeof(int);
	
	array_sort1(vec,size);
	
	int* xPtr = vec;
	
	for(int i = 0 ; i < size ; i++){
	
		printf("Value %d = %d\n",i,*xPtr);
		xPtr++;
	
	}

}
