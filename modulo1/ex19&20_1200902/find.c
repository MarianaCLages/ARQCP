#define _GNU_SOURCE

#include <string.h>

char* find_word(char* word, char* initial_addr) {
	
	char* temp;
	
	temp = strcasestr(initial_addr, word);
	
	return temp;
}

void find_all_words(char* str, char* word, char** addrs) {
	
	char* initial_addr = str;
	char* found_addrs;
	
	do {
		found_addrs = find_word(word, initial_addr);
		if (found_addrs != 0) {
			*addrs = found_addrs;
			addrs++;
			initial_addr = found_addrs + 1;
		}
	} while (found_addrs != 0);
}
