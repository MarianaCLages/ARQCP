#include <stdio.h>
#include "compress_shorts.h"

int main(){

	short vecShort[] = {0xAABB, 0xBBAA, 0xCCAA, 0XAACC, 0xBBDD, 0xDDBB};
	
	int size = sizeof(vecShort)/sizeof(short);
	
	int vecInt[size/2];
	
	compress_shorts(vecShort,size,vecInt);
	
	for(int i = 0 ; i < size/2 ; i++){
	
		printf("0x%X ",*(vecInt + i));
	
	}
	
	printf("\n");

	
}
