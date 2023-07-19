//wap to print age.The age is 18 then print adult otherwise not adult
#include<stdio.h>
int main()
{
    int age;
    printf("enter the value of agee : ");
    scanf("%d",&age);

    (age > 18) ? (printf("Adult")) : (printf("Not Adult"));
    return 0;
}