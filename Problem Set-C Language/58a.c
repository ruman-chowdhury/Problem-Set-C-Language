#include<stdio.h>

main()
{
    double N;
    printf("Enter value of N:");
    scanf("%lf",&N);

    double sum=0;
    double i;   //use double/float because every time value will be fraction
    for(i=1;i<=N;i++)
    {

        if(i==1)
        {
            printf("\n 1+");   //print first number
        }
        else if(i==N)
        {
            printf("(1/%d)",i); //print last number
        }
        else
        {
            printf("(1/%d)+",i);  //print middle numbers
        }

         sum=sum+(1/i);
    }
    printf("\nTotal Sum: %0.3lf\n",sum);

    return 0;
}
