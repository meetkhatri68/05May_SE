//How many even or odd numbers are there
#include<stdio.h>
int main()
{
    int i, a;
    printf("enter the NO: ");
    scanf("%d",&a);
    for (i=2; i<=a; i++)
    {
        if (i%2==0)
        {
            printf("Even Number.");
        }
        else
        {
            printf("Odd Number.");
        }
        
      printf("%d\n",i);  
    }
    
    return 0;
}