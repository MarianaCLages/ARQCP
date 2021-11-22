#include <stdio.h>
#include "where_exists.h"

int main(){

	char str1[] = "hello";
	char str2[] = "aaaa aaa aaaaa hello";
	
	char* xPtr = where_exists(str1,str2);
	
	
	if(xPtr!=NULL) printf("The String STR1 starts in %p of the STR2\n",xPtr);
	else printf("The String STR1 doesnt exist in String STR2");
	
}
