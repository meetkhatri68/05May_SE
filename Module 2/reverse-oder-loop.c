//Wap to print number in reverse oder number
#include<stdio.h>
int main()
{
    int Z;
    int Y;

    printf("Enter Number: ");
    scanf("%d",&Z);

    while (Z>0)
    {
        Y=Z%10;
        printf("%d",Y);
        Z=Z/10;
    }
    return 0;

}