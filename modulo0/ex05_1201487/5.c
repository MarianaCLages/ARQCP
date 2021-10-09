#include <stdio.h>
#include <string.h>

char string_to_char(char *str);

int main(void){

	char str[256];
	char number;
	printf("Please enter the number!");
	scanf("%s",str);
	number = string_to_char(str);
	printf("The number is %d\n",number);

	return 0;
}

char string_to_char(char *str){

    int digit,j=1,m=0;
    
    for (int i = strlen(str)-1; i>=0; i--){
		
		digit= str[i];
		digit = digit-48;
		
		m = m + (digit * j);
		j = j*10;
}
	
	return m;

}
