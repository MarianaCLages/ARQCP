#include <string.h>

char* where_exists(char* str1, char* str2) {
	
	if(str1 == NULL || str2 == NULL || strlen(str1) == 0 || strlen(str2) == 0 || strlen(str1) > strlen(str2)) {
		return NULL;
	}
	
	
	int count = 0;
	
	for(int i = 0; i < strlen(str2); i++) {
		if(*(str2 + i) == *(str1 + count)) {
			count++;
		} else {
			count = 0;
		}
		
		if(strlen(str1) == count) {
			int first = (i - count) + 1;
			return str2 + first;
		}
	}
	return NULL;
}
