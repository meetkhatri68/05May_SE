#include<stdio.h>
int main()
{
    int i, j, count = 5, no = 0;
    for(i=0 ; i<5 ; ++i) //Outer loop  is used for the row
    {
        for (j = 0; j < count; j++)
        {
            printf(" ");
        }
        count--;
        for(j = 0; j<=i; j++)//inner loop  is used for the column
        {
            printf("%d ", no);
            no++;
        }
        printf("\n");
    }
    return 0;
}