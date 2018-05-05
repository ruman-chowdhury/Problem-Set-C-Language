#include<stdio.h>

main()
{
    long int number;
    printf("Enter Number:");
    scanf("%ld",&number);

    long int count,i,remainder;
    for(count=10;count<number;count*=10);

    for(i=10;i<=count;i*=10) //loop will continue 10,100......count(until equal to count)
    {

        remainder=(number%i);
        printf("\n%ld ",remainder);

    }

    getch();
    return 0;
}
