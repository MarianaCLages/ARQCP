#include <stdio.h>

int main(void){

	int x = 5;
	int* xPtr = &x;
	float y = *xPtr + 3;
	
	int vec[] = {10, 11, 12, 13};
		
	printf("%d %f\n",x,y);
	
	printf("%p\n",&x);
	printf("%p\n",&xPtr);
	
	printf("%d\n",*xPtr);
	
	printf("%p\n",vec);
	
	printf("%d %d %d %d\n",vec[0],vec[1],vec[2],vec[3]);
	
	int* xPtr2 = vec;
	
	
    for(int i = 0 ; i < 4 ; i++) {
		
	  printf("%p\n",xPtr2);
	  xPtr2++;
		
	}
	

}
