#include <string.h>

int where_is(char *str, char c, int *p){

	
	char *xPtr = str;
	int *iPtr = p;
	int occ=0;
	
	for(int i = 0 ; i < strlen(str)-1 ; i++){
	
		if(*xPtr == c){
			*iPtr = i;
			iPtr++;
			occ++;
		}
		
		xPtr++;
	
	}
	
	return occ;

}
