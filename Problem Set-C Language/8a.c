#include<stdio.h>

int main(){

    double num1,num2;

    printf("Enter Numbers:\n");
    scanf("%lf %lf",&num1,&num2);

    double choice;
    printf("1:Sum  2:product");
    printf("\nEnter choice:");
    scanf("%lf",&choice);

    if(choice==1){
        printf("Result: %lf",(num1+num2));
    }
    else{
        printf("Result: %lf",(num1*num2));
    }

    getch();
    return 0;
}
