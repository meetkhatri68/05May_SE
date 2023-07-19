//wap to swap the value of two variable not taking third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);


    printf("after swap the value of a = %d and b = %d\n ",a,b);
    a=a-b;
    b=b+a;
    a=b-a;

    printf("before swap the value of a = %d and b = %d\n",a,b);
    return 0;
}