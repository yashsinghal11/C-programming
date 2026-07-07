#include<stdio.h>
void arrayreversal(int arr[],int size){
     int start=0;
     int end=size-1;
     int temp;
     while(start<end){
          temp=arr[start];
          arr[start]=arr[end];
          arr[end]=temp;
          start++;
          end--;

     }

}

int main(){
     int arr[]={20,2,30,40,5,10};
     int size=sizeof(arr)/sizeof(arr[0]);
     arrayreversal(arr,size);
     for (int i=0;i<size;i++){
          printf("%d,",arr[i]);

     }
     return 0;
}