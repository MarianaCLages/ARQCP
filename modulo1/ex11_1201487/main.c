#include <stdio.h>
#include "palindrome.h"

int main(void){

	char vec[] = "Never odd or even ";
	
	if(palindrome(vec)==1){
		printf("Not a palindrome\n");
	} else {
		printf("A palindrome\n");
	}

	return 0;

}
