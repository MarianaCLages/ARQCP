#include <stdio.h>
#include "find_word.h"

int main(void){

	char str1[] = "word";
	char str2[] = "hello hello word hello";
	
	char *addrs[20];
	
	find_all_words(str2,str1,addrs);
	
	
	return 0;

}
