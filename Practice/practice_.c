#include<stdio.h>
int main()
{
   for (int i=1; i<=5; i++)
   {
        for (int a=5; a>=i; a--)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
   }
   for (int k=5; k>=1; k--)
   {
    for (int b=5; b>=k; b--)
    {
        printf(" ");
    }
    for (int c=1; c<=k; c++)
    {
        printf("* ");
    }
    printf("\n");
   }
    return 0;
}