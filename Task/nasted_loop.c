//Nasted Loop task
#include<stdio.h>
int main()
{
    int i, a;
    for (i=5; i>=1; i--)
    {
        for (a=1; a<=i; a++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}