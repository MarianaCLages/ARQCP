#include <string.h>

char* find_word(char* word, char* initial_addr){
	
		char k = 0;
		char l = 0;

		while(*(initial_addr + k) !='\0'){
			if(*(initial_addr + k) <= 'z' && *(initial_addr + k) >= 'a' && *(initial_addr + k) != ' '){
				*(initial_addr + k) -= 32;
			}
		k++;
	} 
	
	
		while(*(word + l)!='\0'){
			if(*(word + l) <= 'z' && *(word + l) >= 'a' && *(word + l) != ' '){
				*(word + l) -= 32;
			}
			l++;
		} 

	for(char i = 0 ; i < (strlen(initial_addr)-1) ; i++){
	
		while(*(initial_addr + i) == ' ') initial_addr++;
		
		if(*(initial_addr + i) == *word){
		
			for(char j = 0 ; j < (strlen(word)-1) ; j++){
				
				if(*(initial_addr + i + j) != *(word + j)) return NULL;
			
			} 
			
			return initial_addr;
		
		}
		
	} 
	
	return NULL;
	
}
