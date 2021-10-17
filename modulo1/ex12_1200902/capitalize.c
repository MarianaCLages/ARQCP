#include <string.h>

void capitalize (char *str) {
	
	char *ptr = str;
	
	for(int i = 0; i < strlen(str); i++) {
		if(*ptr == ' ') {
			if(*(ptr + 1) >= 97 && *(ptr + 1) <= 122) {
				*(ptr + 1) = *(ptr + 1) - 32;
			}
		}
		ptr++;
	}
}
