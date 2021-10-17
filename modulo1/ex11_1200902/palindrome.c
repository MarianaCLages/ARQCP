#include <string.h>

int palindrome(char *str) {
	
	char *ptr1;
	char *ptr2;
	
	ptr1 = str;
	ptr2 = &str[strlen(str)-1];
	
	for(int i = 0 ; i < (strlen(str) - 1) / 2 ; i++) {
		if(*ptr1 == ' ' || *ptr1 == ',' || *ptr1 == '.') {
			ptr1++;
		} else if(*ptr2 == ' ' || *ptr2 == ',' || *ptr2 == '.') {
			ptr2--;
		}
		
		if(*ptr1 >= 'A' && *ptr1 <= 'Z'){
			*ptr1 = *ptr1 + 32;
		} else if (*ptr2 >= 'A' && *ptr2 <= 'Z'){
			*ptr2 = *ptr2 + 32;
		}
	}

	
	if(*ptr1 == *ptr2) {
		return 1;
	} else {
		return 0;
	}
}
