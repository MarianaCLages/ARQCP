#include <string.h>

int palindrome(char *str){
	
	char* xPtr1 = str;
	char* xPtr2 = &str[strlen(str)-1];

	for(int i = 0 ; i < (strlen(str)-1)/2 ; i++ ) {
	
		while(*xPtr1 == ' ' || *xPtr1 == '-' || *xPtr1 == '.' || *xPtr1 == ',' || *xPtr1 == '_') xPtr1++;
		
		if(*xPtr1 >= 'a' && *xPtr1 <= 'z') *xPtr1 -= 32;
		
		while(*xPtr2 == ' ' || *xPtr2 == '-' || *xPtr2 == '.' || *xPtr2 == ',' || *xPtr2 == '_') xPtr2--;
		
		if(*xPtr2 >= 'a' && *xPtr2 <= 'z') *xPtr2 -= 32;
		
		if(*xPtr1 != *xPtr2) return 0;
		
		xPtr1++;
		xPtr2--;
		
	}
	
	return 1;
	
}
