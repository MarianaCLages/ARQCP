#include <stdio.h>
#include "sum_even.h"

int main(){

	int vec[] = {1, 2 ,3 ,4};

	int n = sizeof(vec)/sizeof(int);
	
	int sum = sum_even(vec,n);
	
	printf("Value of the sum = %d\n",sum);

}
