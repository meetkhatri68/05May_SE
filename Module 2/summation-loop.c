//Wap to make summation of given number (EG: 123(1+2+3=6)
#include<stdio.h>
int main()
{
    int N,R;
    int sum=0;

    printf("Enter NO: ");
    scanf("%d",&N);

    while (N>0)
    {
        R=N % 10;
        sum=sum + R;
        N= N / 10;
    }
    printf("Sum Of This NO: %d",sum);
    return 0;
    
}
