#include <string.h>
#include <stdio.h>

char* where_exists(char*  str1,  char* str2){

	char *sPtr1 = str1;
	char *sPtr2 = str2;
	int count=0;
	
	char *auxPtr;
	
	for(int i = 0 ; i < strlen(str2)-1 ; i++){
	
		for(int j = 0 ; j < strlen(str2)-1; j++){
			if(*sPtr1 == *sPtr2){
				auxPtr=sPtr1;
				for(int k = 1 ; k < strlen(str1)-1 ; k++){
					if(*(sPtr1 + k) == *(sPtr2 + k)){
						count++;
					} else break;
				}
			}
			sPtr1++;
		}
	
	sPtr2++;
	sPtr1=str1;
	
	}
	count--;
		
	if(count == strlen(str1)) return auxPtr;
	else return NULL;
	
}
