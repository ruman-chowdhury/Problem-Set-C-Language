#include<stdio.h>
#include<math.h>

main()
{
    int N;
    printf("How many Numbers do you want to give:");
    scanf("%d",&N);
    /*
        int i,numbers;

        for(i=1;i<=N;i++)
        {
            scanf("%d",&numbers);
        }
    */
    int j,pos=0,neg=0,numbers;
    printf("Numbers:\n");
    for(j=1; j<=N; j++)
    {
        scanf("%d",&numbers);
        if(numbers>0)
        {
            pos++;
        }
        else if(numbers<0)
        {
            neg++;
        }
        else
        {
            break;
        }
    }

    printf("\nPositive: %d",pos);
    printf("\nNegative: %d",neg);

    getch();
    return 0;
}
