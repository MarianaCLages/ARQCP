#include <stdio.h>
#include <string.h>

int i = 0;

int integer_part(char *str) {
	int digit = 0;
	
	while (str[i] != '.') {
		digit = digit + str[i] - 48;
		digit = digit * 10;
		i++;
	}
	return digit / 10;
}

int fractional_part(char *str) {
	int digit = 0;
	i++;
	
	while (str[i] != 0) {
		digit = digit + str[i] - 48;
		digit = digit * 10;
		i++;
	}
	return digit / 10;
}

int main(void) {
	char number[] = "123.456";
	
	printf("Integer part: %d\n", integer_part(number));
	printf("Fractional part: %d\n", fractional_part(number));
}
