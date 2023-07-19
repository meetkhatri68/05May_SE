#include<stdio.h>
int main(){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j <=1; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <=1; l++)
        {
            printf("*");
        }
        for (int m = 1; m <= 10-i; m++)
        {
            printf("  ");
        }
        for (int n = 1; n <= 1; n++)
        {
            printf("*");
        }
        for (int o = 1; o <= i; o++)
        {
            printf(" ");
        }
        for (int p = 1; p <=1; p++)
        {
            printf("*");
        }
        for (int q = 0; q < 2; q++)
        {
            printf(" ");
        }

        // E
         for(int a=1;a<=7;a++)
        {
          if(i==0||i==4||i==9)
          {
            printf("* ");
          }
          else if(a==2||a==3||a==5||a==6||a==7||a==4)
          {
            printf("  ");
          }
          else
          {
            printf("* ");
          }
        }

        // e
        for(int b=1;b<=1;b++)
        {
            printf("  ");
        }
        for(int a=1;a<=7;a++)
        {
          if(i==0||i==4||i==9)
          {
            printf("* ");
          }
          else if(a==2||a==3||a==5||a==6||a==7||a==4)
          {
            printf("  ");
          }
          else
          {
            printf("* ");
          }
        }

        //T
        for(int b=1;b<=1;b++)
        {
            printf("  ");
        }
        for(int a=1;a<=10;a++)
        {
          if(i==0||a==5)
          {
            printf("* ");
          }
          else if(a==2||a==3||a==5||a==6||a==10||a==1||a==7||a==8||a==9||a==4)
          {
            printf("  ");
          }
          else
          {
            printf("* ");}
        }
        
        printf("\n");
    }
    return 0;
}
 
           