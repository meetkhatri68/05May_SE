#include<stdio.h>
int main()
{   
    for(int k=1;k<=7;k++)
        {
            printf("     ");
        }
        printf("\n");
    for (int i=1; i<=8; i++)
    {   
        for (int a=0; a<i; a++)
        {
            printf("*");
        }
         for (int c=7; c>=i; c--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    } 
    for(int l=1;l<=7;l++)
    {
        printf("#");
    }printf("\n");  
    return 0;
}