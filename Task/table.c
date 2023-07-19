#include<stdio.h>
int main()
{
    FILE *table;
    int no,i,mul;
    printf("enter the table no: ");
    scanf("%d",&no);
    for (i = 1; i < 11; i++)
    {
        mul=no*i;

    table=fopen("table.text","a");
    fscanf(table,"%d %d %d",&no,&i,&mul);
    fprintf(table,"%d %d %d\n",no,i,mul);
    fclose(table);
    }
    return 0;
}
    