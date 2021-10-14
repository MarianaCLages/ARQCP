#include <stdio.h>

int sum_even( int *p, int num);

int main(void){

	int p[] = {1,2,3,4,5,6,7,8,9,10};
	int num = 10;
	
	printf("%d\n",sum_even(p,num));
	return 0;

}

int sum_even( int *p, int num){

	int* xPtr = p;
	int sum=0;

	for(int i = 0 ; i < num ; i++){
	
		sum = sum + *xPtr;
		xPtr++;
	
	}
	
	return sum;

}
