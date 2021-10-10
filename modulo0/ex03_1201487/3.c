#include <stdio.h>

int fill_array(int *vec);

int main(void) {

int arr[30];
int average = fill_array(arr);

printf("The average of the introduce numbers is: %d",average);

return 0;
}

int fill_array(int *vec) {
	
 int sum=0;

 for(int i=0;i<=29;i++){
	 printf("Enter a number\n");
	 scanf("%d",&vec[i]);
	 sum = sum + vec[i];
 }
 
 return (sum/30);

}
