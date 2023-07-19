//goto statements
#include<stdio.h>
void main()
{
    int i;
    int count, flag = 0;
    printf("Enter the no to check whether it's prime or not:");
    scanf("%d", &count);
    for ( i = 2; i < count; i++)
    {
        if (count % i == 0)
        {
            flag = 1;
            goto prime;
        }
    }
    prime: 
    if(flag==0)
    {
        printf("\n%d is a Prime Number\n",count);
    }
    else{
        printf("\n%d isn't a Prime number\n",count);
    }
    
}