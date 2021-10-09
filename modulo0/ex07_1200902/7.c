#include <stdio.h>
#include <string.h>

int count_words(char *str) {
	char count = 0;
	
	for(int i = 0; str[i] != '0'; i++) {
		if(str[i] == ' ') {
			count++;
		}
	}
	return count + 1;
}

int main() {
	char str[300];
	
	printf("String: ");
	scanf("%[^\n]s", str);
	
	int words = count_words(str);
	printf("\nNumber of words = %d", words);
	
	return 0;
}
