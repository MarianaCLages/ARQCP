#include <string.h>
#include <stdio.h>

 int acc = 0 ;

char* find_word(char* word, char* initial_addr){
 
	char *sPtr1 = word;
	char *sPtr2 = initial_addr;
	int count=0;
	int flag = 0;
	
	char *auxPtr;
	
	for(int l = 0 ; l < strlen(initial_addr)-1 ; l++){
		if(*sPtr2 > 'a' && *sPtr2 < 'z'){
			*sPtr2 -=32;
		}
	}
	
	for(int i = 0 ; i < strlen(initial_addr)-1 ; i++){
		for(int j = 0 ; j < strlen(initial_addr)-1; j++){
			if(*sPtr1 == *sPtr2){
				for(int k = 1 ; k < strlen(word)-1 ; k++){
					if(*(sPtr1 + k) == *(sPtr2 + k)){
					 if(flag==0){
						auxPtr=sPtr1;
					    flag++;			
				       }
						count++;
					} else {
						 break;
						 flag=0;
				}
			}
		}
	sPtr1++;
  if(count-1 == strlen(word)) break;
   }
  if(count-1 == strlen(word)) break;
  sPtr2++;
  sPtr1=word;	
  }
  count--;
	
	if(count == strlen(word)) return auxPtr;
	else return NULL;	
 }


 void find_all_words(char*  str,  char*  word,  char**  addrs){
	  
	 while(*str != str[strlen(str)-1]) {
	 addrs[acc] = find_word(word,str);
	 acc++;
    }
	 
 }
