#include <stdio.h>
#include "array_sort1.h"

int main(void){

	int vec[]={1, 3, 2, 5, 6, 4};
	int n=6;
	
	array_sort1(vec,n);
	
	for(int i = 0 ; i < n ; i++){
		printf("%d\t",vec[i]);
	}
	
}
