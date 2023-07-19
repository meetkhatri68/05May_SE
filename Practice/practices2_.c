#include<stdio.h>
int main()
{
    for (int i=1; i<5; i++)
    {
        for (int a=5; a>i; a--)
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