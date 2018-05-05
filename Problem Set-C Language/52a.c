#include<stdio.h>

int main(){

int day=365;
int hours=24;
int minutes=60;
int seconds=60;

int year;
year=(day*hours*minutes*seconds);

printf("Number of Seconds in a Year:%d",year);

getch();
return 0;
}

