/*
write a program to make user choose which to perform conversion form these:
1.kms to miles
2.inches to foot
3.cms to inches
4.pound to kgs
5.inches to meters
*/

#include<stdio.h>
void kmstomiles();
void inchestofoot();
void cmstoinches();
void poundtokgs();
void inchestometers();


int main(){

     int choice;
     printf("====unit converter====");
     printf("1. kilometers to miles\n");
     printf("2. inches to feet\n");
     printf("3. centimeters to inches");
     printf("4. pounds to killograms");
     printf("5. inches to meters\n");
     printf("enter your choice :");
     scanf("%d",&choice);

     switch(choice){
          case 1:
               kmstomiles();
               break;
          case 2:
               inchestofoot();
               break;
          case 3:
               cmstoinches();
               break;
          case 4:
               poundtokgs();
               break;
          case 5:
               inchestometers();
               break;
          default:
               printf("invalid choice !");

     }
     return 0;
}

void kmstomiles(){
     float km;
     printf("enter km :");
     scanf("%f",&km);
     printf("miles =%.2f\n",km*0.621371);

}

void inchestofoot(){
     float inch;
     printf("enter inch:");
     scanf("%f",&inch);
     printf("feets=%.2f\n",inch/12);


}

void cmstoinches(){
     float cm;
     printf("enter cm :");
     scanf("%f",&cm);
     printf("inches=%.2f\n",cm/2.54);

}

void poundtokgs(){
     float pounds;
     printf("enter pounds:");
     scanf("%f",&pounds);
     printf("kgs=%.2f\n",pounds*453592);

}

void inchestometers(){
     float inches;
     printf("enter inches:");
     scanf("%f",&inches);
     printf("meters= %.2f\n",inches*0.0254);

}