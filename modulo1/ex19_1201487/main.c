#include <stdio.h>
#include "find_word.h"

int main(void){

	char str1[] = "word";
	char str2[] = "hello hello word hello";
	
	char *addrs[20];
	
	find_all_words(str2,str1,addrs);
	
	
	for(int i = 0 ; i < 2 ; i++){
	
	
	if(addrs[i] == NULL) printf("The word %d:str1 doesn't exist in the string\n",i);
	else{
		 printf("Pointer : %p\n",&addrs[i]);
		 printf("Value of the first char of the word: %c\n",*addrs[i]);
		 printf("The word exists in the string\n");
	 }
	
	return 0;

}
}
