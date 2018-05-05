#include<stdio.h>
#include<math.h>

main()
{
   long int number;
    printf("Enter a Number:");
    scanf("%ld",&number);

    long int remainder,count=1;
    for(count=10;count<number;count*=10)
    {
        printf("\nC:%ld ",count); //This is just for understand.you don't need print this count value.
                                  //when count>number loop will break.but last value will assign in count variable
    }
    printf("\n\nC:%ld \n",count);//the last greater value will print in this line.

    while(count>=10)
    {
        remainder=(number%count); //first time divisible is greater than number.that's why first time remainder will print exact as input number
        printf("\n%d",remainder);
        count=count/10;
    }
/*

 long n = 39714,i=1;
    for(i=10;i<n;i*=10);

    for (i=i/10; n>0; i/=10)
    {
        printf("%d\n", n);
        n%=i;
    }
    */
    getch();
    return 0;
}
