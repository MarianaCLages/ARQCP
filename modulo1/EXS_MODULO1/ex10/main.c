#include <stdio.h>
#include "odd_sum.h"

int main(){

	int vec[] = {5,1,3,2,2,7};
	
	int sum = odd_sum(vec);
	
	printf("Odd sum = %d\n",sum);
	
}
