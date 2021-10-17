#include <stdio.h>
#include "where_is.h"
#define MAX 50

int main(void){

	int vec[MAX];
	char c = 'a';
	char str[]="The number must be saved";
	
	for(int i = 0 ; i < MAX ; i++){
	
		vec[i] = 0;
	
	}
	
	int ttl = where_is(str,c,vec);
	
	for(int i = 0 ; i < MAX ; i++){
	
		printf("%hhd\t",vec[i]);
	
	}
	
	printf("\n The number of occ was : %hhd\t",ttl);
	return 0;

}
