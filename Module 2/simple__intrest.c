//wap to find simple intrest
#include<stdio.h>
int main()
{
    int amt,intrest,time,SI;
    printf("Amount Value : ");
    scanf("%d",&amt);
    printf("Intrest Rate : ");
    scanf("%d",&intrest);
    printf("Time Duration : ");
    scanf("%d",&time);

    SI = (amt * intrest * time)/100;
    printf("Simple Intrest=%d",SI);
    return 0; 

}