#include<stdio.h>
int main(){
     int arr[5]={10,20,15,40,50};
     int even_count=0;
     int odd_count=0;
     for(int i=0;i<5;i++){
          if (arr[i]%2==0){
               even_count=even_count+1;
          }
          else{
               odd_count=odd_count+1;
          }

     }
     printf("The even numbers count is %d\n",even_count);
     printf("The odd numbers count is %d\n",odd_count);
     return 0;
}