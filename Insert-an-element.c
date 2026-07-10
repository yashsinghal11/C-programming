#include<stdio.h>
int main(){
     int arr[10]={10,20,30,40,50};
     int n=5;
     for(int i=n;i>0;i--){
          arr[i]=arr[i-1];

     }
     //insert at begining
     arr[0]=25;
     n++;
     int position=3;
     int value=35;
     for(int i=n;i>position;i--){
          arr[i]=arr[i-1];

     }
     //insert at any location
     arr[position]=value;
     n++;
     for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
     }
     return 0;

}