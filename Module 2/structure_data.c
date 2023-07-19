//WAP of sturcture employee that provides the following informationn print and display empno,empname,address and age.
#include<stdio.h>
struct data
{
    int no,age;
    char Name[20],Address[20];
};
int main()
{
    struct data empdata[40];
    int i;
    for (i = 0; i < 1; i++)
    {
        printf("Enter the Employee No: ");
        scanf("%d",&empdata[i].no);
        printf("Enter the Employee Name: ");
        scanf("%s",&empdata[i].Name);
        printf("Enter the Employee Age: ");
        scanf("%d",&empdata[i].age);
        printf("Enter the Employee Address: ");
        scanf("%s",&empdata[i].Address);
    }
    printf("|.......................................|\n");
    printf("|No\t| Name\t| Age\t| Address\t| \n");
    for (i = 0; i < 1; i++)
    {
        printf("|%d\t| %s\t| %d\t| %s\t| \n",empdata[i].no,empdata[i].Name,empdata[i].age,empdata[i].Address);
    }
    printf("|.......................................|\n");
    return 0;
}
