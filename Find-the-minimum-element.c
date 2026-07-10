#include<stdio.h>
int main(){
     int arr[5]={60,20,30,40,50};
     int minimum=arr[0];
     for (int i=1;i<5;i++){
          if (arr[i]<minimum){
               minimum=arr[i];
          }
     }
     printf("Theminimum number is %d\n",minimum);
     return 0;
}