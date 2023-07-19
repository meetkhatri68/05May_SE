//keep taking number as input from user until user enter an even number
#include<stdio.h>
int main()
{
    int a;
    do
    {
        printf("enter NO: ");
        scanf("%d",&a);
        printf("%d\n",a);

        if (a%2==0)
        {
            break;
        }
        
    
    } while (1);
    printf("This Is Even Number...");
    return 0;
}