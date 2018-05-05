#include<stdio.h>
#include<math.h>

main()
{
    long int num;
    printf("Enter Number:");
    scanf("%ld",&num);

    long int count,sum=0,r1;
    for(count=1;count<num;count*=10);

    while(count>=1)
    {
        r1=num/count;
        num=num%count;
        sum=sum+r1;
        count=count/10;

    }
    printf("\nSum of all digits: %ld",sum);

    getch();
    return 0;
}
