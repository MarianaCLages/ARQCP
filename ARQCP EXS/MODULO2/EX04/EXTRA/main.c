#include <stdio.h>
#include "asm.h"

int op1=0, op2=0;

int main(void) {
	
 printf("Valor op1:");
 scanf("%d",&op1);
 
 printf("Valor op2:");
 scanf("%d",&op2);
 
 int res = sum();
 
 int sub = sum_v2();
 
 int sum = sum_v3();
 
 printf("sum = %d:0x%x\n", res,res);
 printf("sub = %d:0x%x\n",sub,sub);
 printf("sum_v3 = %d:0x%x\n", sum,sum);
 //printf("Op3 : %d and Op4: %d\n",op3,op4);
 
 
return 0;
}
