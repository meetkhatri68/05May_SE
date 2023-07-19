//Wap to make summation of first and last digit 
#include<stdio.h>
int main()
{
    int N,last,first,sum;

    printf("Enter NO: ");
    scanf("%d",&N);
    
    last=N%10;
    while (N>10)
    {
        N=N/10;
    }
    first=N;
    sum=first+last;
    printf("sum of First NO %d Last NO %d: %d",first,last,sum);
    return 0;
}