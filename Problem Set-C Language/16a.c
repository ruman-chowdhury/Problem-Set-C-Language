#include<stdio.h>

int main(){

 int month_num;
 printf("Month Number:");
 scanf("%d",&month_num);

 if(month_num==1){
    printf("January:31 days");
 }
 else if(month_num==2){
    printf("February:28 days");
 }
  else if(month_num==3){
    printf("March:31 days");
 }
  else if(month_num==4){
    printf("April:30 days");
 }
  else if(month_num==5){
    printf("May:31 days");
 }
  else if(month_num==6){
    printf("June:30 days");
 }
  else if(month_num==7){
    printf("July:31 days");
 }
  else if(month_num==8){
    printf("August:30 days");
 }
  else if(month_num==9){
    printf("September:31 days");
 }
  else if(month_num==10){
    printf("October:30 days");
 }
  else if(month_num==11){
    printf("November:31 days");
 }
  else if(month_num==12){
    printf("December:30 days");
 }
 else{
    printf("You've entered wrong keyword.");
 }

}
