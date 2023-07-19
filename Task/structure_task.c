#include<stdio.h>
struct stdata
{
    int id,english,maths,science,gujarati,total,sum;
    char Name[10],result[10];
    float per;
};
int main()
{
    struct stdata data[40];
    int i;
    for (i = 0; i < 1; i++)
    {
        printf("Enter id: ");
        scanf("%d",&data[i].id);
        printf("Enter Name: ");
        scanf("%s",&data[i].Name);
        printf("Enter marke of english: ");
        scanf("%d",&data[i].english);
        printf("Enter marke of maths: ");
        scanf("%d",&data[i].maths);
        printf("Enter marke of science: ");
        scanf("%d",&data[i].science);
        printf("Enter marke of gujarati: ");
        scanf("%d",&data[i].gujarati);
    }
    printf("\t|--------------------------------------------------------------------------------|\t\n");
    printf("\t|id\t|Name\t|Eng\t|Maths\t|Sci\t|Guj\t|Total\t|Percantage\t|Result\t|\n");
    
    for ( i = 0; i < 1; i++)
    {
        data[i].sum=data[i].english + data[i].maths + data[i].science + data[i].gujarati;
        data[i].per=(data[i].sum/4);
         if (data[i].per<100 && data[i].per>50)
        {
            printf("Pass");
        }
        else
        {
            printf("Fail");
        }
        printf("\t|%d\t|%s\t|%d\t|%d\t|%d\t|%d\t|%d\t|%f\t|%s\t|\n",data[i].id,data[i].Name,data[i].english,data[i].maths,data[i].science,data[i].gujarati,data[i].sum,data[i].per,data[i].result);
       
    }
    printf("\t|--------------------------------------------------------------------------------|\t\n");
    return 0;
}