//Write a program to print the smallest number of two.
#include<stdio.h>
int main()
{
    int a , b;
    printf("enter the value of a");
    scanf("%d",&a);

    printf("enter the value of b");
    scanf("%d",&b);

    if (a<b)
    {
       printf("smalllest number is %d",a);

    }
    else
    {
        printf("smalllest number is %d",b);
    }
    return 0;
    
}