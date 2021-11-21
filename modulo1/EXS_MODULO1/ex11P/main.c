#include <stdio.h>
#include "palindrome.h"

int main(){

	char str[] = "Gateman sees name, garageman sees name tag ";
	
	int boolean = palindrome(str);
	
	if(boolean) printf("The String its a palindrome\n");
	else printf("The String its not a palindrome\n");
	
}
