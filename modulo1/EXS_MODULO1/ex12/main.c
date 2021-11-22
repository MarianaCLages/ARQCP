#include <stdio.h>
#include "capitalize.h"

int main(){

	char str[] = "Gateman sees name, garageman sees name tag ";
	
	capitalize(str);
	
	printf("Upper case : %s\n",str);
	
}
