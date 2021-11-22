#include <string.h>

void capitalize(char *str){
	
	char* xPtr1 = str;

	for(int i = 0 ; i < (strlen(str)-1) ; i++ ) {
	
		while(*xPtr1 == ' ' || *xPtr1 == '-' || *xPtr1 == '.' || *xPtr1 == ',' || *xPtr1 == '_') xPtr1++;
		
		if(*xPtr1 >= 'a' && *xPtr1 <= 'z') *xPtr1 -= 32;

		xPtr1++;
		
	}
	
}
