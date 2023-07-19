#include<stdio.h>
int main()
{

    int b;
    for (int i=0; i<6; i++)
    {
        for (int a=6; a>i; a--)
        {
            printf(" ");
        }
        for (int b=0; b<i; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;   
}