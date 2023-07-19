//Wap to find area of rectangle(formula of rectangle is x=l*w)
#include<stdio.h>
int main()
{
    int X,length,width;
    printf("enter the value of length : ");
    scanf("%d",&length);
    printf("enter the value of width : ");
    scanf("%d",&width);

    X=length*width;
    printf("area of rectangle is : %d",X);

    return 0;
    
}