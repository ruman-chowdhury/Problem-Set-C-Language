#include<stdio.h>

int main(){

 int year;
 printf("Year:");
 scanf("%d",&year);

 if((year%400==0)||(year%4==0)&&(year%100!=0)){

    printf("\n %d is Leap Year",year);
 }
 else{
    printf("Not Leap Year!");
 }

    getch();
    return 0;
}
