// 2D array is use to define the tabular formate
#include<stdio.h>
// define global array
// int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
int a[2][3];
int i,j;
int getdata()
{
    printf("Enter the value: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
}
void display()
{
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 

}
int main()
{
    //Call the UDF function
    getdata();
    display();
    return 0;
}
