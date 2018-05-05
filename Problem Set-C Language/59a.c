#include<stdio.h>
#include<math.h>

main()
{
    double N;
    printf("Enter N:");
    scanf("%lf",&N);

    double i,sum=0;
    for(i=1;i<=N;i++)
    {
        if(i==1)
        {
            printf("\n 1 + ");
        }
        else if(i==N)
        {
            printf("(1/%.0lf) ",(i*i));
        }
        else
        {
            printf("(1/%.0lf) + ",(i*i));
        }

        sum=sum+i;

    }
    printf("\n\nTotal Sum: %0.3lf",sum);

    getch();
    return 0;
}
