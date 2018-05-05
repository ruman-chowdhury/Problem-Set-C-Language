#include<stdio.h>

int main(){

 double number;
 printf("\nEnter:");
 scanf("%lf",&number);

 int choice;
 printf("1:feet to meters");
 printf("\n2:meters to feet");

 printf("\n\nEnter Your choice:");
 scanf("%d",&choice);

 double answer;
 if(choice==1){
    answer=(number/3.28);
    printf("\nThe number in Meter= %0.3lf",answer);
 }

 if(choice==2){
    answer=(number*3.28);
    printf("\nThe number in Feet= %0.3lf",answer);
 }

 getch();
 return 0;

}
