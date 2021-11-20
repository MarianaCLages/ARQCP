#include <stdio.h>
#include "swapBytes.h"

short s = 0xABDE;

char op1 = 10;
char op2 = 12;

short op3 = 50;
short op4 = 60;

int main(void){

	short s_changed = swapBytes();
	
	short cr_into_short = concatBytes();
	
	int cross_Sum_bytes = crossSumBytes();
	
	short cross_sum_bytesAss = crossSumBytesAss();
	
	printf("Value s_changed 0x%x\n",s_changed);
	printf("Value cr_into_short 0x%x\n",cr_into_short);
	printf("Value cross_Sum_bytes 0x%x\n",cross_Sum_bytes);
	printf("Value cross_Sum_bytes_Ass %x\n",cross_sum_bytesAss);
	return 1;

}
