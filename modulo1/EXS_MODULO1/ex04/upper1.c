void upper1(char *str){

	char* xPtr = str;

	while(*xPtr != '\0') {
	
		while(*xPtr == ' ' || *xPtr == '-' || *xPtr == '.' || *xPtr == ',' || *xPtr == '_') xPtr++;
		
		if(*xPtr >= 'a' && *xPtr <= 'z') *xPtr -= 32;
		
		xPtr++;
		
	}
}
