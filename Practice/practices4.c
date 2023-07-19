#include<stdio.h>
int main()
{
    for (int i=1; i<=5; i++)
    {
        for (int a=5; a>i; a--)
        {
            printf(" ");
        }
        for (int j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}