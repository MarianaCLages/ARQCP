#include <stdio.h>
#include <string.h>

int string_to_char(char *str1,char *str2);
int average(int m,int n);

int main(void){

	char str1[256];
	char str2[256];
	int avr;
	
	printf("Please enter the first number!");
	scanf("%s",str1);
	
	printf("Please enter the second number!");
	scanf("%s",str2);
	
	avr = string_to_char(str1,str2);
	
	printf("The average is %d\n",avr);

	return 0;
}

int string_to_char(char *str1,char *str2){

    int digit1,digit2,j=1,m=0,n=0;
    
    for (int i = strlen(str1)-1; i>=0; i--){
		
		digit1= str1[i];
		digit1 = digit1-48;
		
		m = m + (digit1 * j);
		j = j*10;
}

	j=1;
	
    for (int k = strlen(str2)-1; k>=0; k--){
		
		digit2= str2[k];
		digit2 = digit2-48;
		
		n = n + (digit2 * j);
		j = j*10;
}
	
	int avr;
	avr = average(m,n);
	return avr;

}
int average(int m,int n){
	
	float avr;
	avr=(m+n)/2;
	return avr;
	
}
