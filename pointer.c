#include<stdio.h>
int main(){
     int a=10;
     int *ptra=&a;
     printf("the address of integer a is : %p\n",&ptra);
     return 0;
}