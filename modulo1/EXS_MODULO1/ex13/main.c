#include <stdio.h>
#include "where_is.h"

int main(){

	char str[] = "Gateman sees name, garageman sees name tag ";
	
	int vec[30];
	
	int size = sizeof(vec)/sizeof(int);
	
	for(int i = 0 ; i < size ; i ++){
	
		vec[i] = 0;
	
	}
	
	int num = where_is(str,'a',vec);
	
	for(int i = 0 ; i < size ; i ++){
	
		if (vec[i] != 0 ){
		
			printf("Index:%d\n",vec[i]);
		
		}
	
	}
	
	printf("It appears %d times\n",num-2);
	
}
