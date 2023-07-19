//patten 7
#include<stdio.h>
int main()
{
    int i,a,b,c,d;
    for (i=1; i<=5; i++)
    {
        for (a=1; a<=i; a++)
        {
           for (b=5; b>=1; b--)
           {
            for (c=1; c<=b; c++)
            {
                printf("*");
            }
            
           }
           
        }
        }
        printf("\n");
    return 0;
}