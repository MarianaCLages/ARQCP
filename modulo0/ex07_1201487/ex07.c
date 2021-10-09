#include <stdio.h>
#include <string.h>

char count_words(char *str);
  
int main(void){

	char str[256];
	
	printf("Type a phrase\n");
	scanf("%[^\n]s",str);
	
	char value = count_words(str);
	printf("There are %d words",value);
		
	return 0;
		
}  

char count_words(char *str){

	char count=0;
	
	for(int i=0; str[i] != '\0' ;i++){
	   if(str[i] == ' '){
	   count++;
	}

}
	return count+1;
 
}
