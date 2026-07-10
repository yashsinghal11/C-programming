#include<stdio.h>
int linearsearch(int arr[],int key,int n);
int main(){
     int arr[5]={10,20,30,40,50};
     int key=2;
     int n=5;

     int res=linearsearch(arr,key,n);
     if (res != -1)
    {
        printf("Element found at index %d\n", res);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}
int linearsearch(int arr[],int key,int n){
     for(int i=0;i<n;i++){
          if (arr[i]==key){
               return i;
          }
          

     }
     return -1;
}