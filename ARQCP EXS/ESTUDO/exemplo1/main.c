#include <stdio.h>

int main(){

    unsigned  int  vec  [10]  =  {0x0B0F0000,  0x0C0A0000,  0x0B080000,  0x07100000,  0x0F120000, 0xF0E10000, 0x0B0F0000, 0x0A0B0000, 0x0F100000, 0x090F0000};
    
    unsigned  short arr  [10]  =  {0xCC0F,  0xDD0A,  0xAA08,  0xEE10,  0xBB12, 0xF0E1, 0x0B0F, 0x0A0B, 0x0F10, 0x090F};
    
    unsigned  int arr1  [5]  =  {0x0000000,  0x0000000,  0x0000000,  0x0000000,  0x0000000};
	
	unsigned short *ptr = (unsigned short *) vec;
	
	//unsigned char *ptrResto = (unsigned char *) vec;
	
	int res=0;
	
	char* ptr1 = arr1;
	char* ptr2 = arr;
	
	int size = sizeof(vec)/sizeof(int);
	
	short size2 = sizeof(arr)/sizeof(short);
	
	
	for(int i = 1; i < size*2 ; i+=2){
		
		res = *(ptr + i);
		printf("VALORES DO VETOR DOS 32 BITS:0x%X\n",res);
		res = *(ptr + i - 1);
		printf("Valores do resto : %d\n",res); 
		
	}
	
	
	for(char j = 0 ; j < size2 ; j++){
		
		*(ptr1 + j) = *(ptr2 + j);
		
	}
	
	for(int j = 0 ; j < size/2 ; j++){
		
		printf("VETOR INT: 0x%X\n",*(ptr1 + (4*j)));
		
	}
	
}
