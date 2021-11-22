#include <stdio.h>
#include "swap.h"

int main(){

	int vec1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int vec2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	int size = sizeof(vec1)/sizeof(int);
	
	swap(vec1,vec2,size);
	
	for(int i = 0; i < size ; i++){
	
		printf("%d ",*(vec1 + i));
	
	}
	
	printf("\n");
	
	for(int i = 0; i < size ; i++){
	
		printf("%d ",*(vec2 + i));
	
	}
	
	printf("\n");
	
}
