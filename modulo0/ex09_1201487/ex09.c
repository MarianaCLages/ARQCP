#include <stdio.h>
#include <string.h>

char verifyBase(char *str);

int main(void){

	char str[256];
	
	printf("Please enter a number\n");
	scanf("%s",str);
	
	char type = verifyBase(str);
	
	printf("The number is in a ");
	
	switch(type){
		case(1): 
		printf("binary base\n");
		break;
		case(2):
		 printf("octal base\n");
		 break;
		case(3): 
		printf("Hexadecimal base \n");
		break;
		case(4):
		 printf("Decimal base or Hexadecimal\n");
		 break;
		default :
		 printf("ERROR\n");
		 break;
	}
	
	return 0;
	
	
}

char verifyBase(char *str){

	char countBinary=0;
	char countOctal=0;
	char countHexDecimal=0;
	char countDecimal=0;
	
	char digit=0;

	for(int i=0;i<=strlen(str)-1;i++){
		
		digit = str[i] - 48;
		
		if(digit==1 || digit== 0){
			countBinary++;
		} else if(digit<=7){
			countOctal++;
		} else if(digit>8 || (str[i]<'71' && str[i]>'65')){
		    countHexDecimal++;
	} else { countDecimal++; }
}

	if(countBinary==strlen(str)){ return 1; }
	else if(countOctal==strlen(str)) {return 2;}
	else if(countHexDecimal==strlen(str)){ return 3;}
	else { return 4;}
	
}
