#include <stdio.h>
#include "frequencies.h"

int main(){

	float grades[] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67, 16.23, 18.75};
	
	int freq[19];
	
	int size = sizeof(grades)/sizeof(float);
	
	for(int i = 0 ; i < (sizeof(freq)/sizeof(int)) ; i ++){
	
		*(freq + i) = 0;
	
	}
	
	frequencies(grades,size,freq);
	
	for(int i = 0 ; i < (sizeof(freq)/sizeof(int)) ; i ++){
	
			printf("%d ",*(freq + i));
	
	}
	
	printf("\n");
	
}
