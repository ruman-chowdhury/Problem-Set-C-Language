#include<stdio.h>

int main(){

float jupiter_years;
float earth_days;

printf("Earth_Day:");
scanf("%f",&earth_days);

jupiter_years=earth_days/(12*365);  // 1 J_Year=12 e_year=12*365 day

printf("Jovian Year: %0.3f",jupiter_years);

getch();
return 0;

}
