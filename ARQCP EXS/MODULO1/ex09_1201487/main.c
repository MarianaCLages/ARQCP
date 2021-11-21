#include <stdio.h>
#include "sort_without_reps.h"

int main(void){
	
	int vec1[] = {1, 3, 7, 9, 13, 2, 6, 5, 5};
	int vec2[10];
	
	int n = 9;
	int count;
	
	count = sort_without_reps(vec1,n,vec2);
	
	for(int i = 0 ; i < count ; i++){
		
		printf("%d\n",vec2[i]);
		
	}

}
