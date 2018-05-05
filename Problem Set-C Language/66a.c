#include<stdio.h>
#include<math.h>

main()
{
    float a,b,c;
    printf("Values of A B C:\n");
    scanf("%f %f %f",&a,&b,&c);

    float discriminant,root1,root2;
    discriminant=(b*b-4*a*c);

    if(discriminant<0)
    {
        printf("Roots are imaginary.");
    }
    else
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);

        printf("\nFirst Root:%0.2f \n2nd Root:%0.2f",root1,root2);
    }

    getch();
    return 0;
}
