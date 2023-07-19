//WAP to make addition of two nummber using pointer
#include<stdio.h>
int main()
{
    int a,b,c;
    int *no,*ptr;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    no=&a;
    ptr=&b;
    c=*no + *ptr;
    printf("value of a and b is: %d",c);
    return 0;

    
}