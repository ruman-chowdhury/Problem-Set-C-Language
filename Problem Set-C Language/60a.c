#include<conio.h>
#include<stdio.h>
void main()
{
    float rs;
    int Paisa;
    printf("Enter the Rs. you want to convert to paisa :");
    scanf("%f",&rs);

    Paisa=rs*100;  //1 Rupee=100 paisa
    printf("\n The PAISA of you Rs. equal to : %d",Paisa);

    getch();

}
