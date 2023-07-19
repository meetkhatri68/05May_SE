// wap to find area of circle(formula of circle c=pi*r*r)
#include <stdio.h>
int main()
{
    float pi = 3.14;
    float r, c;
    printf("enter the value of r : ");
    scanf("%f", &r);

    c = pi * r * r;

    printf("area of circle is %f", c);

    return 0;
}