#include<stdio.h>
int main()
{
    int i,x;

    for (i=1; i<=5; i++)
    {
        for (x=1; x<=i; x++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}