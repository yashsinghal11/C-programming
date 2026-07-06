#include<stdio.h>
int main(){
     int marks;
     printf("Please enter your marks");
     scanf("%d",&marks);
     if (marks>80){
          printf("Excellent grades");
     }
     else if (marks>=40){
          printf("Good grades");

     }
     else{
          printf("Failed");
     }
     return 0;
}