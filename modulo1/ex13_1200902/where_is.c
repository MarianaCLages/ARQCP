#include <string.h>

int where_is (char *str, char c, int *p) {
	
	char *ptr = str;
	int *ptr2 = p;
	int count = 0;
	
	for(int i = 0; i < strlen(str); i++) {
		if(*ptr == c) {
			*ptr2 = i;
			ptr2++;
			count++;
		}
		ptr++;
	}
	return count;
}
