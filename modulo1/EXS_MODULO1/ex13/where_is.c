#include <string.h>

int where_is(char *str, char c, int *p){
	
	char* xPtr1 = str;
	int* xPtr2 = p;
	int count = 0;

	for(int i = 0 ; i < (strlen(str)-1) ; i++ ) {
	
		if(*xPtr1 == c) {
		
			*(xPtr2 + i) = i;
			count++;
			xPtr2++;
		
		}

		xPtr1++;
		
	}
	
	return count;
	
}
