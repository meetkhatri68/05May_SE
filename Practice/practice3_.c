#include<stdio.h>
int main()
{
    for (int i=0; i<8; i++)
    {
        for (int a=0; a<i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int j=8; j>0; j--)
    {
        for (int z=0; z<j; z++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}