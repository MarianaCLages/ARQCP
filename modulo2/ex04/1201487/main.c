#include <stdio.h>
#include "asm.h"

int op1 = 0;
int op2 = 0;

int main(void){
	printf("Valor op1:");
	scanf("%d", &op1);
	
	printf("Valor op2:");
	scanf("%d", &op2);
	
	int res = sum();
	
	printf("sum = %d\n", res);
	
	res = sum_v2();
	
	printf("sub = %d\n", res);
	
	long res_long = sum_v3();
	
	printf("long_sum = %ld\n", res_long);
	
	return 0;
}
