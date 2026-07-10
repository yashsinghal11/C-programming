#include<stdio.h>
int binarysearch(int arr[],int key,int n);
int main(){

     int arr[5]={10,20,30,40,50};
     int key=50;
     int n=5;
     int res=binarysearch(arr,key,n);
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
int binarysearch(int arr[],int key, int n){
     int low=0;
     int high=n-1;
     while(low<=high){
     int mid=low+(high-low)/2;
     if (arr[mid]==key){
          return mid;
     }
     else if(key>arr[mid]){
          low=mid+1;
     }
     else{
          high=mid-1;
     }

     }
     return -1;
}