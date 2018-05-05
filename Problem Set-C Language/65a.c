#include<stdio.h>

main()
{
    float x,y,z;
    printf("Input Numbers:");
    scanf("%f %f %f",&x,&y,&z);

    float temp1,temp2,temp3;
    temp1=x;
    x=y;
    y=temp1;

    temp2=y;
    y=z;
    z=temp2;

    temp3=z;
    z=x;
    x=temp3;

    printf("\nX:%0.2f \nY:%0.2f \nZ:%0.2f ",x,y,z);

    getch();
    return 0;
}
