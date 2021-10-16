#include <string.h>
#include <stdio.h>

int palindrome(char *str){
	
	char *xPtr1 = str;
	char *xPtr2 = &str[strlen(str)-1];
	
	for(int i = 0 ; i < (strlen(str)-1)/2 ; i++){
	
		if(*xPtr1 == ' ' || *xPtr1 == ',' || *xPtr1 == '.' || *xPtr1 == '-' || *xPtr1 == '_') {
			xPtr1++;
		} else if(*xPtr2 == ' ' || *xPtr2 == ',' || *xPtr2 == '.' || *xPtr2 == '-' || *xPtr2 == '_') {
			xPtr2--;
		}
	
		if(*xPtr1 >= 'A' && *xPtr1<='Z'){
			*xPtr1 += 32;
		} else if (*xPtr2 >= 'A' && *xPtr2<='Z'){
			*xPtr2 += 32;
		}
		
		printf("1:%c\n",*xPtr1);
		printf("2:%c\n",*xPtr2);
		
		if(*xPtr1 != *xPtr2) return 1;
		
		xPtr1++;
		xPtr2--;
		
	}
	return 0;
}
