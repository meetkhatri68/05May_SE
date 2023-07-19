//Wap to print table up to given number
#include<stdio.h>
int main()
{
    int a;
    int i;

    printf("enter NO : ");
    scanf("%d",&a);
    printf("Multipication of table %d is\n",a);

    for(int i=1; i<=10; i++)
    {
        printf("%d\n",a*i);
    }

    // while (i<=10)
    // {
    //     printf("%d\n",a*i);
    //     i++;
    // }
    return 0;
}
