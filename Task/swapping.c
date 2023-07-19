// swap using the third variable
#include<stdio.h>
int main()
{
    int a=20, b=30, c;
    printf("\nbefore value swap the value of a: %d and b: %d",a,b);

    c=a;
    a=b;
    b=c;

    printf("\nafter value swap the value of a is: %d and b is: %d",a,b);

    return 0;

}