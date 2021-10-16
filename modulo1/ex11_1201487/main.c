#include <stdio.h>
#include "palindrome.h"

int main(void){

	char vec[] = "Gateman sees name, garageman sees name tag";
	
	if(palindrome(vec)==1){
		printf("Not a palindrome\n");
	} else {
		printf("A palindrome\n");
	}

	return 0;

}
