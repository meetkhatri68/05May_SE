//WAP to print fabonacci series up to given numbers
#include<stdio.h>
int main()
{
    int x,w;
    int y=0;
    int z=1;
    printf("fabonacci series limit: ");
    scanf("%d",&x);
    for (int i=1; i<=x; i++)
    {
        printf("%d\n",y);
        w=y+z;
        y=z;
        z=w;
    }
    return 0;
}