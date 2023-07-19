//swapping values

#include<stdio.h>
int main()
{ 
    int a;
    int b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("before swaping the value of a = %d and b = %d\n",a,b);

    a=a-b;
    b=a+b;
    a=b-a;
    printf("after swaping the value of a = %d and b = %d\n",a,b);

}