void capitalize (char *str){

	char *xPtr1 = str;

	for(int i = 0 ; i < (strlen(str)-1) ; i++){
	
		if(*xPtr1 == ' ') {
			if(*(xPtr1 + 1) > 'a' && *(xPtr1 + 1) < 'z'){
				*(xPtr1 + 1) -= 32;
			}
		}
		
		xPtr1++;
		
	}
	return 0;


}
