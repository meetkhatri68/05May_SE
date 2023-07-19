//WAP to find perimeter of circle
#include<stdio.h>
int main()
{
    float radius , PI , p;
    printf("enter the value of radius : ");
    scanf("%f",&radius);

    printf("enter the value of PI : ");
    scanf("%f",&PI);

    p = 2 * PI * radius;
    printf("perimeter of circle is %f",p);

    return 0;

}