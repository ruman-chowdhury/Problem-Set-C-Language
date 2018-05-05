#include<stdio.h>
#define N 5

main(){

    int count=0;
    float number,sum,average;
    sum=0;
    while(count<N){
        scanf("%f",&number);
        sum=sum+number;
        count++;
    }
    average=sum/N;

    printf("\n%d)Total Sum:%f",N,sum);
    printf("\nAverage:%f\n",average);

    return 0;
}
