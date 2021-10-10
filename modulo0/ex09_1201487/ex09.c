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
		 printf("Decimal base or Hexadecimal base\n");
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
			countOctal++;
			countDecimal++;
			countHexDecimal++;
		} else if (digit<=7 && digit>=0){
			countOctal++;
			countDecimal++;
			countHexDecimal++;
		} else if (digit>=0 && digit<=9){
		    countDecimal++; 
		    countHexDecimal++;
		} else if (digit>=0 || (str[i]<'72' && str[i]>'64')) {
			countHexDecimal++;
	}
 }
 
	if(countBinary==strlen(str)){ return 1; }
	else if(countOctal==strlen(str)) {return 2;}
	else if(countDecimal == strlen(str)) { return 4;}
	else if(countHexDecimal==strlen(str)){ return 3;}
	
}
