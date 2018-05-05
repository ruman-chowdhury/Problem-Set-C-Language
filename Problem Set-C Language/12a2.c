#include<stdio.h>

int main()
{

    int year;
    printf("Year:");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("\n %d is Leap Year",year);
    }
    else if((year%4==0) && (year%100!=0)) //1904,is not true for first expression.but
    {
        printf("\n %d is Leap Year",year); //1904%4==0 && (1904%100 !=0,this means,it has remainder).
    }

    else
    {
        printf("Not Leap Year!");
    }

    getch();
    return 0;
}
