#include <stdio.h>
#include "palindrome.h"

int main(void) {
	
	char str[] = "Gateman sees name, garageman sees name tag";
	
	if(palindrome(str) == 1) {
		printf("Palindrome: yes\n");
	} else {
		printf("Palindrome: no\n");
	}
	
	return 0;
}
