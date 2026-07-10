#include<stdio.h>
void quicksort(int arr[],int n){
     if(n<=1){
          for(int i=0;i<n;i++){
               printf("%d ",arr[i]);}
          return;
          
     }
     int pivot=arr[0];
     int left[100],right[100];
     int l=0,r=0;
     for(int i=1;i<n;i++){
          if (arr[i]<pivot){
               left[l++]=arr[i];
          }
          else{
               right[r++]=arr[i];
          }
     }
     quicksort(left,l);
     printf("%d ",pivot);
     quicksort(right,r);


}
int main(){
     int arr[]={5,1,10,8,9,6,7,3,4};
     int n=sizeof(arr)/sizeof(arr[0]);
     quicksort(arr,n);
     return 0;


}
