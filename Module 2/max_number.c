//Wap to find the max number
#include<stdio.h>
int main()
{
    int  i,a,no[5];
    int max;
    printf("enter the number\n");
    for (i=0; i<5; i++)
    {
        scanf("%d",&no[i]);
    }
    max=-1;
    for (i=1; i<5; i++)
    {
        if (no[i]>max)
        {
            max=no[i];
        }   
    }
    printf("max number is : %d",max);
    return 0;
}