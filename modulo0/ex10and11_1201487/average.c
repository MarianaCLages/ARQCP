int sum = 0;
int g_n=2;
int g_v[100];

 int average_array (int v [], int n){
 
	for(int i = 0 ; i < n ; i ++ ){
	 sum = sum + v[i];
	}
	return sum/n;
 }
 
  int* fill_array(int *arr,int n){
	  
	  for(int i = 0 ; i < n ; i ++ ){
		arr[i] = i;
	}
	return arr;
	  
  }
  
  int average_global_array(){
	  
	  fill_array(g_v,100);
	  
	  int count=0;
	  
	  for(int i = 0 ; i < 99 ; i++) {
		  
		  if(g_v[i] == g_n) {
			  count++;
		  }
		  
	  }
	  
	  return count;
	  
  }
