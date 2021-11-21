#include <stdio.h>

int main(void){

	int x = 5;
	int* xPtr = &x;
	
	float y = *xPtr + 3;
	int vec[] = {10, 11, 12, 13};
	
	printf("Value of x:%d\nValue of y:%f\n\n",x,y);
	
	printf("Memory Address of the value x :%p\n Memory Address of the value y:%p\n\n",&x,&xPtr);
	
	printf("Value pointed by xPtr:%d\n\n",*xPtr);
	
	printf("Memory Address of the first element in the array:%p\n\n",&vec);
	
	printf("Value of vec[0]:%d\nValue of vec[1]:%d\nValue of vec[2]:%d\nValue of vec[3]:%d\n\n",vec[0],vec[1],vec[2],vec[3]);
	
	printf("Memory Address of vec[0]:%p\nMemory Address of vec[1]:%p\nMemory Address of vec[2]:%p\nMemory Address of vec[3]:%p\n\n",&vec[0],&vec[1],&vec[2],&vec[3]);

}
