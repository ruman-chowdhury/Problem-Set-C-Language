#include<stdio.h>

int main(){

 double num1,num2;

 printf("Enter:\n");

 scanf("%lf",&num1);
 printf("/\n");
 scanf("%lf",&num2);

 double Answer;
 Answer=num1/num2;

 if(num2!=0){
    printf("Result: %0.3lf",Answer);
 }
 else{
    printf("Result is undefined.Because Anything divided by zero is undefined.");
 }

 getch();
 return 0;

}
