#include<stdio.h>

main()
{
    long int number;
    printf("Enter Number:");
    scanf("%ld",&number);

    long count,i;
    for(count=10;count<number;count*=10);

    for(i=count;i>=10;i/=10) //exam:-input:5678,,count=10,000 from 1st for loop.i=10/10=1,then won't enter into the loop
    {
        number=(number%i);
        printf("\n%ld ",number);
    }

    getch();
    return 0;
}
