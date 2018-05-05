#include<stdio.h>

int main()
{

    char ch;
    printf("Character:");
    scanf("%c",&ch);

    if((ch>='A'&&ch<='Z'))
    {
        printf("Uppercase");
    }
    else if((ch>='a'&&ch<='z'))
    {
        printf("lowercase");
    }
    else{
        printf("Not a Alphabet!");
    }
}

