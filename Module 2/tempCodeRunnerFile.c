//Wap to make addition,subtractionand multiplication of two matrix using 2-D array.
#include<stdio.h>
// define global array
int main()
{
    int C[10][10], A[10][10], B[10][10], i, j, l, row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    printf("Enter the number of matrix A: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
   
    printf("Enter the number of matrix B: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
     printf("\n Matrix A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", A[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n Matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", B[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("Multiplication of A,B \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            
            for (l = 0; l < col; l++)
            {
                C[i][j] =  A[i][l] * B[l][j];
            }
            printf("%d", C[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("Addition of A,B \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            
            for (l = 0; l < col; l++)
            {
                C[i][j] =  A[i][l] + B[l][j];
            }
            printf("%d", C[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("Substraction of A,B \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            
            for (l = 0; l < col; l++)
            {
                C[i][j] =  A[i][l] - B[l][j];
            }
            printf("%d", C[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}


