#include<stdio.h>

main()
{
    double purchase_price,year_service,depreciation,salvage_value;
    printf("\nEnter Purchase Price:");
    scanf("%lf",&purchase_price);

    printf("\nEnter Depreciation:");
    scanf("%lf",&depreciation);

    printf("\nEnter Year of service:");
    scanf("%lf",&year_service);

    salvage_value=purchase_price-(depreciation*year_service);
    printf("\nThe salvage Value is: %0.3lf",salvage_value);

    getch();
    return 0;
}
