#include <stdio.h>

void upper1(char *str);

int main(void){
	
	char str[] = "aaAbbCc";
	upper1(str);
	printf("%s\n",str);
	return 0;

}

void upper1(char *str){

	char *xPtr = str;
	
	while(*xPtr != '\0'){
	
		if(*xPtr >= 'a' && *xPtr <= 'z'){
			*xPtr = *xPtr - 32;
		}
		xPtr++;
	}

}
