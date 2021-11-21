int sort_without_reps(int *src, int n, int *dest){

	int* xPtr1 = src;
 	int* xPtr2 = dest;
 	int t = 0;
 	
 	int size = 0;
 	
 	
 	for(int i = 0 ; i < n ; i++){
		
		for(int j = i + 1 ; j < n ; j++) {
		
			if (*(xPtr1 + j) != *(xPtr1 + i)){
				if(*(xPtr1 + j) < *(xPtr1 + i)){
					
				t = *(xPtr1 + i);
				*(xPtr1 + i) = *(xPtr1 + j);
				*(xPtr1 + j) = t;
					
		}
		
	  }	
	  
	}
	
  }
  
  for(int i = 0 ; i < n ; i++){
		
		if (*(xPtr1 + i ) != *(xPtr1 + i + 4)) {
			
		
			 *(dest + i ) = *(xPtr2 + i) = *(xPtr1 + i);
			 size++;
			 
		 } else {
			 
			 *(dest + i ) = 0;
			 size++;
			 
		 }
		
	}
  
  return size;
  
}
