#include<stdio.h>
#include<math.h>

main()
{
    float L,R,c,frequency;
    printf("Enter Inductance(L):");
    scanf("%f",&L);

    printf("Enter Resistance(R):");
    scanf("%f",&R);

    for(c=0.01;c<=0.1;c=c+0.01)
    {
        frequency=sqrt((1/(L*c))-(pow(R,2)/(4*pow(c,2))));
       //frequency=sqrt((1/(L*c))-((R*R)/(4*c*c)));
        printf("\nFor capacitance %0.2f,Frequency is: %0.3f Hz",c,frequency);
    }
    getch();
    return 0;
}
