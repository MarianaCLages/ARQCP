#include <stdio.h>
#include "where_exists.h"

int main(void){

	char str1[] = "aaa";
	char str2[] = "hello hello aaa hello";
	
	char *sPtr = where_exists(str1,str2);
	
	if(sPtr == NULL) printf("The string str1 doesnt exist in str2\n");
	
	else{
		 printf("Pointer : %p\n",&sPtr);
		 printf("Value of the first char in str1: %c\n",*sPtr);
		 printf("The string str1 exists in str2\n");
	 }
	
	return 0;

}
