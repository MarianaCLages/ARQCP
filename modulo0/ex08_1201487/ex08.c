#include <stdio.h>
#include <string.h>

char integer_part(char x,char *str);
char fractional_part(char x,char *str);

int main(void){

	char str[256];
	
	printf("Type a number\n");
	scanf("%[^\n]s",str);
	
	char position;
	
	for(int i=0;i<strlen(str)-1;i++){
	
		if(str[i]=='.') {
			position = str[i]-48;
		}
	
	}
	
	printf("%d",position);
	
	char in = integer_part(position,str);
	char frac = fractional_part(position,str);
	
	printf("Fractional part = %d\n",frac);
	printf("Integer part = %d\n",in);
	
	return 0;

}

char integer_part(char x,char *str){
	
	char digit,m=0,j=1;
	
	for(int i=x;i>=0;i--){
		
		digit = str[i];
		digit = digit-48;
		
		m = m + (digit * j);
		j = j*10;
		
	}
	
	return m;
	
}

char fractional_part(char x,char *str){
	
	char digit,m=0,j=1;
	
	for(int i=strlen(str)-1;i>=x;i--){
		
		digit = str[i];
		digit = digit-48;
		
		m = m + (digit * j);
		j = j*10;
		
	}
	
	return m;
	
}
