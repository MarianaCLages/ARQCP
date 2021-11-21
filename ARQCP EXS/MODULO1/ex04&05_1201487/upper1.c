void upper1(char *str){

	char *xPtr = str;
	
	while(*xPtr != '\0'){
	
		if(*xPtr >= 'a' && *xPtr <= 'z'){
			*xPtr = *xPtr - 32;
		}
		xPtr++;
	}

}
