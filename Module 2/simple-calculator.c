/*Wap to make simple calculator to make addition, subtraction, multiplication, division and modulo*/
#include<stdio.h>
int main()
{
    int a,b,option;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);

    printf("\npress 1 for addition");
    printf("\npress 2 for subtraction");
    printf("\npress 3 for multiplication");
    printf("\npress 4 for division");
    printf("\npress 5 for modulo");
    printf("\nenter your choice : ");
    scanf("%d",&option);

    switch (option)
    {
    case 1:printf("sum = %d",a+b);
    break;
    case 2:printf("subtraction = %d",a-b);
    break;
    case 3:printf("multiplication = %d",a*b);
    break;
    case 4:printf("division = %d",a/b);
    break;
    case 5:printf("modulo = %d",a%b);
    break;
    default:printf("enter the valid value : ");
    }
     return 0;
}