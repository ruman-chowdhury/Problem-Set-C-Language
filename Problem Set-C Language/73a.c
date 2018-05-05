#include<stdio.h>

main()
{
    int time_interval,time,i;
    printf("Enter Time Interval:");
    scanf("%d",&time_interval);

    float initial_velocity,acceleration,distance=0;
    for(i=1;i<=time_interval;i++)
    {
        printf("\n\nAt t%d interval Enter Time(sec):",i);
        scanf("%d",&time);

        printf("Enter Velocity:");
        scanf("%f",&initial_velocity);

        printf("Enter Acceleration:");
        scanf("%f",&acceleration);

        distance=distance+(initial_velocity*time+acceleration*pow(time,2))/2;

    }
    printf("\n\nTotal distance at %d interval of times: %0.3f ms-1",time_interval,distance);

    getch();
    return 0;
}
