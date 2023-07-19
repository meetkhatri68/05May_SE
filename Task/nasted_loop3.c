//nasted loop task
#include<stdio.h>
int main()
{
    int i,a,c;
    for (i=1; i<=5; i++)
    {
        for (a=1; a<=4-i; a++)
        {
            printf(" ");
        }
        for (c=5; c>i; c--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}