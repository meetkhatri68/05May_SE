//Ternary operator
#include<stdio.h>
int main()
{
   int a , b , c;
   printf("enter the value of a : ");
   scanf("\n%d",&a);
   printf("enter the value of b : ");
   scanf("\n%d",&b);
   printf("enter the value of c : ");
   scanf("\n%d",&c);
   
   (a > b && a > c) ? (printf("a is larger")) : ((b > c && b > a) ? (printf("b larger")) : (c > b && c > a) ? (printf("c is larger")) : (printf("Nothing")));

    return 0;
}