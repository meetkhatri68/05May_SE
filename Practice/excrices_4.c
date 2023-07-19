//write a program to print average 30 number

#include<stdio.h>
int main()
{
    float a,b,c,avg;
    printf("enter the value of a");
    scanf("%f",&a);

    printf("enter the value of b");
    scanf("%f",&b);

    printf("enter the value of c");
    scanf("%f",&c);

    avg=(a+b+c)/30;
    printf("average : %f",avg);
}