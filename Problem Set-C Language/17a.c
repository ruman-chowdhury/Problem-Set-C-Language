#include<stdio.h>

int main()
{

    int unit;
    printf("Unit:");
    scanf("%d",&unit);

    float amount,total_bill;
    if(unit<=50)
    {
        amount=(unit*0.5);
        total_bill=amount+(amount*0.2);
        printf("For %d unit, Total Bill: %0.3f tk",unit,total_bill);
    }
    else if(unit>=51&&unit<=150)
    {
        amount=(unit-50)*0.75;
        total_bill=amount+(amount*0.2);
        printf("For %d unit, Total Bill: %0.3f tk",unit,total_bill);
    }
    else if(unit>=151&&unit<=250)
    {
        amount=(unit-150)*1.20;
        total_bill=amount+(amount*0.2);
        printf("For %d unit, Total Bill: %0.3f tk",unit,total_bill);
    }
    else if(unit>=251)
    {
        amount=(unit-250)*1.50;
        total_bill=amount+(amount*0.2);
        printf("For %d unit, Total Bill: %0.3f tk",unit,total_bill);

    }
    else
    {
        printf("You entered wrong keyword");
    }
    printf("\n");
}
