#include <stdio.h>
#include <math.h>

void power_ref(int* x, int y);

int main(void){

	int x[]={10,20};
	int y = 3;
	power_ref(x,y);
	printf("%ls\n",x);
	
	return 0;
	
}

void power_ref(int* x, int y){
	
	int* xPtr = x;
	*xPtr = pow(*xPtr,y);
}
