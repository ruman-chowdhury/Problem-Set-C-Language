#include<stdio.h>

int main()
{

    int number;
    printf("Enter:");
    scanf("%d",&number);

    if((number%5==0))  //example:55%5=0(true),55%11=0(true)
    {
        if(number%11==0)
        {

            printf("The number is dividable");
        }
    }
    else
    {
        printf("Not dividable");
    }

    getch();
    return 0;

}

