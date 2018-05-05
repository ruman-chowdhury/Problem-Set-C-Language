#include<stdio.h>
#include<math.h>

main()
{
    float length,width;
    printf("Enter:");
    scanf("%f %f",&length,&width);

    float area,perimeter;
    area=(length*width);
    perimeter=2*(length+width);

    printf("\nArea:%0.2f \nPerimeter:%0.2f",area,perimeter);

    getch();
    return 0;
}
