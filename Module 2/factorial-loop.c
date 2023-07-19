//WAP tp print factorial of given number
#include<stdio.h>
int main()
{
    int a;
    int fact=1;
    printf("Enter NO:");
    scanf("%d",&a);
    printf("Factorial Of %d is\n",a);
    
    for (int i=1; i<=a; i++)
    {
        fact=fact*i;
    }
    printf("Factorial %d",fact);
    return 0;
}