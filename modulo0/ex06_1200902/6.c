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
	char num1[20];
	char num2[20];
	
	printf("Insert the first number: ");
	scanf("%s", num1);
	printf("Insert the second number: ");
	scanf("%s", num2);
	
	double average = (string_to_int(num1) + string_to_int(num2))/2;
	printf("\nAverage = %.2f", average);
	
	return 0;
}
