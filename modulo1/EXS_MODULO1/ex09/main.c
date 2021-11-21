#include <stdio.h>
#include "sort_without_reps.h"

int main(){

	int vec[] = {2, 3, 1, 1, 4, 5, 6, 7, 8, 9, 2};
	
	int size = sizeof(vec)/sizeof(int);
	
	int dest[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	
	int size_dest = sort_without_reps(vec,size,dest);
	
	int* xPtr = dest;
	
	for(int i = 0 ; i < size_dest ; i++){
	
		printf("Value %d = %d\n",i,*xPtr);
		xPtr++;
	
	}

}
