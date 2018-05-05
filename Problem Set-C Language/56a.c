#include<stdio.h>

int main()
{

    float amount,interest_rate;
    int period,year=1;

    printf("\nInput amount,interest_rate,and period:\n ");
    scanf("%f %f %d",&amount,&interest_rate,&period);

    float value ;

    while(year<=period)
    {
        value=amount+amount*interest_rate;
        printf("\n%d Year %0.3f tk\n",year,value);

        amount=value;
        year++;
    }
    printf("\n\n");
}
