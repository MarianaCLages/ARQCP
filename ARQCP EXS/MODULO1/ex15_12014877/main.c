#include <stdio.h>
#include "funcs.h"

int vec[100];
int *set = vec;

int main(void){

	int num = 100;
	int limit = 20;
	
	populate(vec,num,limit);
	
	for(int i = 0 ; i < num/3 ; i++){
		int flag = check(*set,*(set+4),*(set+8));
		if(flag==1){
			printf("Yes\n");
		} else {
			printf("No\n");
		}
		inc_nsets(); // Ainda nao esta a funcionar
		set++;
	}
	
	return 0;

}
