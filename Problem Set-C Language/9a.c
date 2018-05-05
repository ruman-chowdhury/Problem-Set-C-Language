#include<stdio.h>

int main()
{

    int choice;
    printf("1:Find Maximum  2:Find Minimum");
    printf("\nChoice:");
    scanf("%d",&choice);


    double n1,n2;
    if(choice==1)
    {

        printf("Enter Numbers:\n");
        scanf("%lf %lf",&n1,&n2);
        //Find maximum numbers
        if(n1>n2)
        {
            printf("\n %lf is Maximum",n1);
        }
        else
        {
            printf("\n %lf is Maximum",n2);

        }
    }

    if(choice==2)
    {

        printf("Enter Numbers:\n");
        scanf("%lf %lf",&n1,&n2);

        //Find minimum numbers
        if(n1<n2)
        {
            printf("\n %lf is Minimum",n1);
        }
        else
        {
            printf("\n %lf is Minimum",n2);

        }
    }
    getch();
    return 0;

}
