//Write a program to check if the given number is a natural number.
//(Natural numbers start from 1)
#include<stdio.h>
int main()
{
    int number;
    printf("enter the number :");
    scanf("%d",&number);

    if (number > 0)
    {
        printf("given number is natural number");
    }
    else
    {
        printf("given number is not natural number");
    }
    return 0;
}