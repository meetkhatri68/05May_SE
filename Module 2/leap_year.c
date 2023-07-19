//Wap to find given year is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("enter year : ");
    scanf("%d",&year);

    if (year%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
    
}