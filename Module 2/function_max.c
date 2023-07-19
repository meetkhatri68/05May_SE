//Wap to find out the max number from given array using function.
#include<stdio.h>
int maximum()
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
}
int main()
{
    maximum();
    return 0;
}