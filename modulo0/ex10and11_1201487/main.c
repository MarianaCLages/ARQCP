#include <stdio.h>
#include "average.h"

int main(void){
	
	int n=10;
	int arr[n];
	
	int avr = average_array(fill_array(arr,n),n);
	
	int global_avr=average_global_array();
		
	printf("The average between the typed numbers is : %d\n",avr);
	printf("The global average is : %d\n",global_avr);
	
	return 0;

}
