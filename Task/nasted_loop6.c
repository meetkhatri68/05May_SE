//nasted loop
#include<stdio.h>
int main()
{
    int i,x,y,z,a;
    for (i=1; i<=5; i++)
    {   
        a=i-1;
        for (x=1; x<=5-i; x++)
        {
            printf(" ");
        }
        for (y=1; y<=i; y++)
        {
            printf("%d",y);
        }
        for (z=1; z<=i-1; z++)
        {
            printf("%d",a);
            a--;
        }
        
        printf("\n");
    }
    return 0;
}