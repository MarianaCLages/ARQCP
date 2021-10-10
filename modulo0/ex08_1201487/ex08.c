#include <stdio.h>
#include <string.h>

char integer_part(char *str);
char fractional_part(char *str);

int i = 0;

int main(void){

	char str[256];
	
	printf("Type a number\n");
	scanf("%[^\n]s",str);
	
	char in = integer_part(str);
	char frac = fractional_part(str);
	
	printf("Fractional part = %d\n",frac);
	printf("Integer part = %d\n",in);
	
	return 0;

}

char integer_part(char *str){
	
	char digit,m=0,j=1;
	
	while(str[i]!='.')
		{
		digit = str[i];
		digit = digit-48;
		i++;
		
		m = m + (digit * j);
		j = j*10;
		
	}
	return m;
}


char fractional_part(char *str){
	
	char digit,m=0,j=1;
	i++;
	
	while(str[i]!=0){
		
		digit = str[i];
		digit = digit-48;
		
		m = m + (digit * j);
		j = j*10;
		i++;
		
	}
	
	return m;
	
}
