#include<stdio.h>

int main(){

 double volume,lenght,width; //number can be fractional

 printf("Length:");
 scanf("%lf",&lenght);

 printf("Width:");
 scanf("%lf",&width);

 volume=lenght*width;
 printf("Volume is= %0.3lf",volume);

 getch();
 return 0;
}
