#include <string.h>

char* where_exists(char* str1,char* str2) {

	for(int i = 0 ; i < (strlen(str2)-1) ; i++){
	
		if(*str1 == *(str2 + i)){
		
			for(int j = 1 ; j < (strlen(str1) - 1) ; j++ ){
			
				if(*(str1 + j) != *(str2 + i + j)) return NULL;
			
			}
			return (str2 + i);
		}
	
	}
	
	return NULL;
	
}
