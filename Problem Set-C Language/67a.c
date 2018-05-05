#include<stdio.h>

main()
{
    float number;
    printf("Enter Number:");
    scanf("%f",&number);

    int integer_part=(int)number;
    float decimal_part=(number-integer_part);

    printf("\nGiven Number:%0.3f \nInteger_part:%d \nDecimal_part:%0.3f",number,integer_part,decimal_part);

    getch();
    return 0;
}
