#include <stdio.h>
#include <math.h>

void power_ref(int* x, int y);

int main(void){

	int x[]={10,20};
	int y = 3;
	
	power_ref(x,y);
	
	printf(" a %ls\n",x);
	
	return 0;
	
}

void power_ref(int* x, int y){
	
	int* xPtr = x;
	float z= *xPtr;
	
	//a função pow nao funciona?? vou fazer um ciclo para fazer o cálculo
	
	for(int i = 0 ; i < y ; i++) {
		
		z * = z;
		
	}
	
	*xPtr = z;
	
}
