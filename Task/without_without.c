#include<stdio.h>
int no;
void getdata()
{
    printf("Enter the value of the no: ");
    scanf("%d",&no);
}
void display()
{
    printf("\nThe number is %d",no);
}
int main()
{
    getdata();
    display();
    return 0;
}