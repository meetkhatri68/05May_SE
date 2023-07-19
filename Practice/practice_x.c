#include<stdio.h>
int main()
{
    int row,col,space;

    for (row=1; row<=5; row++)
    {
       for (col=1; col<=10; col++)
       {
        if (col==1||col==10||row==2&&col==2||row==3&&col==3||row==4&&col==4||row==5&&col==5||row==4&&col==6||row==3&&col==7||row==2&&col==8||row==1&&col==9)
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }
       }
       for (space=1; space<=5; space++)
       {
            printf(" ");
       }
        for (col=1; col<=10; col++)
       {
        if (col==1||col==10||row==5)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }   
       }
       for (space=1; space<=5; space++)
       {
            printf(" ");
       } 
        for (col=1; col<=10; col++)
       {
            if (col==1||row==3&&col==2||row==2&&col==3||row==1&&col==4||row==4&&col==3||row==5&&col==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }       
       }
       for (space=1; space<=5; space++)
       {
            printf(" ");
       }
       for (col=1; col<=10; col++)
       {
        if (col==1||col==10||row==5)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
       }
        printf("\n");
    }  
    return 0;
}   