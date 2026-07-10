#include<stdio.h>
int main(){
     int arr[5]={10,20,30,40,50};
     int n=sizeof(arr)/sizeof(arr[0]);
     int start=0;
     int end=n-1;
     while(start<end){
          int temp=arr[start];
          arr[start]=arr[end];
          arr[end]=temp;
          start++;
          end--;

     }
     printf("Reverse order is\n");
     for (int i=n-1;i>=0;i--){
          printf("%d ",arr[i]);

     }
     return 0;
}