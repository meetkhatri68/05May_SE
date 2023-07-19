//Wap to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int Number;
    printf("enter the Number : ");
    scanf("%d",&Number);

    (Number%2==0) ? (printf("even")) : (printf("odd"));
    return 0;
}