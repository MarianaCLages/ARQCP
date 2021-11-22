#include <stdio.h>
#include "find_word.h"

int main(){
	
	char word[] = "hello there";
	
	char initial_addr[] = "aaa a a hello there a a a aaa";

	char* addr = find_word(word,initial_addr);
	
	
	if(addr!=NULL) printf("The word starts in %p\n",&addr);
	else printf("Word not found\n");

}
