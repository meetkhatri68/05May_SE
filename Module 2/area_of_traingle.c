//Wap to find are of traingle (foremula of traingle is area=(b*h)/2)
#include<stdio.h>
int main()
{
    int base,hight;
    float area;
    printf("enter the base value of traingle : ");
    scanf("%d",&base);
    printf("enter the value of hight : ");
    scanf("%d",&hight);

    area=(base*hight)/2;
    printf("are of traingle is : %f ",area);

    return 0;

}