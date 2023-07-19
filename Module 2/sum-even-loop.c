//sum of even number
#include<stdio.h>
int main()
{
    int  i;
    int a,sum=0;

    printf("enter the NO: ");
    scanf("%d",&a);
    
    
    printf("Even number from 1 to %d are..\n",a);
    for (i=1; i<=a; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            sum = sum + i;
        }
    }
    printf("Sum of Even nummber is ..: %d ",sum);
    return 0;
}