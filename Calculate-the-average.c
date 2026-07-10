#include<stdio.h>
int main(){
     int arr[5]={10,20,30,40,50};
     int n=sizeof(arr)/sizeof(arr[0]);
     int sum=0;
     for (int i=0;i<5;i++){
          sum=sum+arr[i];
     }
     float average=(float)sum/n;
     printf("The average is %f\n",average);
     return 0;
}