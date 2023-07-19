//Sum of odd number
#include<stdio.h>
int main()
{
    int i,a;
    int sum=0;
    
    printf("enter the NO:");
    scanf("%d",&a);
    printf("odd number from 1 to %d are..\n",a);

    for (int i=1; i<=a; i++)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("Sum of odd nummber is...:%d",sum);
     return 0;
}