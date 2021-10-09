#include <stdio.h>

void fill_array(int *vec) {

 for(int i=0;i<29;i++){
	 printf("Enter a number\n");
	 scanf("%d",&vec[i]);
 }

}

int main(void) {

int arr[30];
fill_array(arr);

return 0;
}
