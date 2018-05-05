#include<stdio.h>

main()
{
    float num;
    printf("Enter:");
    scanf("%f",&num);

    printf("%d %6.2f %d",(int)num+1,num,(int)num); //smallest integer not less than given number that means greater than that
                                                   //largest int,not greater than the given number

    getch();
    return 0;
}
