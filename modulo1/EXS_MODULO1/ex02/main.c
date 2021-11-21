#include <stdio.h>
#include "copy_vec.h"

int main(){

	int vec1[] = {1, 2 ,3 ,4};
	int vec2[] = {2, 3, 4, 5};
	
	int n = sizeof(vec1)/sizeof(int);
	
	copy_vec(vec1,vec2,n);
	
	int* xPtr = vec2;
	
	for(int i = 0 ; i < n ; i++) {
		
		printf("Value of the %d element:%d\n",i,*xPtr);
		xPtr++;
		
	}

}
