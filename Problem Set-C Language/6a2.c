#include<stdio.h>

int main(){

double num;

double choice;
printf("1:feet to meters  2:meters to feet");
printf("\nChoice:");
scanf("%lf",&choice);

if(choice==1){
    printf("\nEnter Number:");
    scanf("%lf",&num);
    printf("The number in Meter: %0.3lf",(num/3.28));
}
else{
    printf("\nEnter Number:");
    scanf("%lf",&num);
    printf("The number in Feet: %0.3lf",(num*3.28));
}

getch();
return 0;

}
