#include<stdio.h>
int main(){
     int arr[5]={10,20,30,40,50};
     int maximum=arr[0];
     for (int i=1;i<5;i++){
          if (arr[i]>maximum){
               maximum=arr[i];
          }
     }
     printf("The maximum among all elements in arrya are %d\n",maximum);
     return 0;
     
}