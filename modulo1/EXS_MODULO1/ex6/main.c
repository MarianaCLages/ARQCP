#include <stdio.h>
#include "power_ref.h"

int main(){

	int vec[] = {1, 2, 3, 4};
	int* xPtr = vec;
	
	power_ref(vec,2);
	
	for(int i = 0 ; i < 3 ; i++){
	
		printf("Value %d = %d\n",i,*xPtr);
		xPtr++;
	
	}

}
