#include <stdio.h>
#include "compress_shorts.h"

int main(void){

	short shorts[]={1, 2, 3, 4, 5, 6};
	int n_shorts=6;
	
	int integers[3];
	
	compress_shorts(shorts,n_shorts,integers);
	
	printf("Integers array:");
	for(int i = 0 ; i < 3 ; i++){
	
		printf(" %d,",integers[i]);
	
	}
	printf("\n");
	return 0;

}
