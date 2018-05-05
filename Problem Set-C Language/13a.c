
#include<stdio.h>

int main(){

 float week_number,days;
 printf("Enter Week Number:");
 scanf("%f",&week_number);

 if(week_number==1){
    printf("\nSaturday");
 }
 else if(week_number==2){
    printf("\nSunday");
 }
 else if(week_number==3){
    printf("\nMonday");
 }
 else if(week_number==4){
    printf("\nTuesday");
 }
 else if(week_number==5){
    printf("\nWednesday");
 }
 else if(week_number==6){
    printf("\nThursday");
 }
 else if(week_number==7){
    printf("\nFriday");
 }
 else{
    printf("\n7 days makes a week.So enter 1-7 number.Thank You!");
 }

 getch();
 return 0;

}
