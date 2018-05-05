#include<stdio.h>
#include<math.h>

int main(){

 double num,answer;

 printf("Number:");
 scanf("%lf",&num);

 answer=sqrt(num);

 printf("Result is= %0.3lf",answer);

 getch();
 return 0;
}
