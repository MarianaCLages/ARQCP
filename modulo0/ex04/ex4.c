#include <stdio.h>


int fill count(int *vec,int n,int value){

   int sum2=0;

 for(int i=0;i<n;i++){
   if(vec[i]==value){
     sum++;
   }
 }

}

int main(void){

 int arr[5];
 int n = 5;
 int value = 2;
 
 arr[0] = 2;
 arr[1] = 2;
 arr[2] = 1;
 arr[3] = 4;
 arr[4] = 2;
 
 int sum = count(arr,n,value)
 printf("%d",sum);

}
