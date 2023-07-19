//WAP to find factorial using recursion.
#include<stdio.h>
int fact(int no)
{
    if (no<=1)
    {
        return 1;
    }
    return no*fact(no-1);
}
int main()
{
    int no;
    printf("Enter the value of no: ");
    scanf("%d", &no);
    printf("%d", fact(no));
    return 0;
}