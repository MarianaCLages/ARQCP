#include <stdio.h>
#include "funcs.h"

int main(){

	int num = 100;
	int vec[num];
	int limit = 20;
	
	populate(vec,num,limit);
	
	for(int i = 0 ; i < num/3 ; i++){
	
		int check_num = check(*(vec + i) , *(vec + (2*i)) , *(vec + (3*i)));
		
		printf("Condition : %d\n",check_num);
	
	}
	
	
	
}
