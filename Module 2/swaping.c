//Wap to swap two number without using third variable
#include<stdio.h>
int main()
{
    int a , b;
    printf("enter the value a and b : ");
    scanf("%d%d",&a,&b);
    printf("before swaping the value of a = %d and b = %d\n",a,b);
   //a=a-b , a=10, b=b+a, b=20, a=b-a a=10

   a=a-b;
   b=b+a;
   a=b-a;

     printf("after swaping the value of a = %d and b = %d\n",a,b);

}