#include <stdio.h>
#include <string.h>

int string_to_int(char *str) {
	int number = 0;
	int length = strlen(str);

	for(int i = 0; i < length; i++) {
		number = number * 10 + (int)str[i] - 48;
	}
	return number;
}


int main() {
	char num[20];
	printf("String: ");
	scanf("%s", num);
	printf("\nInteger: %d\n", string_to_int(num));

	return 0;
}
