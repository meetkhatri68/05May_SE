#include<stdio.h>
int main()
{
    for (int i=0; i<5; i++)
    {   
        for (int a=4; a>i; a--)
        {
            printf(" ");
        }
        for (int b=0; b<i; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i=1; i<5; i++)
    {
        for (int a=1; a<i; a++)
        {
            printf(" ");
        }
        for (int j=5; j>i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}