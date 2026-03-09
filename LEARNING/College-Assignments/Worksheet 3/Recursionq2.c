#include <stdio.h>


void matrixSum(int A[10][10],int B[10][10],int C[10][10], int rows, int cols,int r);
int main ()

{
    int A[10][10] , B[10][10] , C[10][10];

    int rows,cols;

    printf ("Enter rows and columns: ");
    scanf ("%d %d",&rows,&cols);

    printf ("Enter Matrix A:\n");

    for (int i=0 ;i < rows; i++)
    {
        for (int j=0;j<cols ; j++)
        {
            scanf ("%d",&A[i][j]);
        }
    }

    for (int i=0 ;i < rows; i++)
    {
        for (int j=0;j<cols ; j++)
        {
            scanf ("%d",&B[i][j]);
        }
    } 

    matrixSum(A,B,C,rows,cols,0);

    printf ("SUM MATRIX:\n");

    for (int i=0; i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            printf ("%d", C[i][j]);
        }
        printf ("\n");
    }

    return 0;
}

void matrixSum(int A[10][10],int B[10][10],int C[10][10], int rows, int cols,int r)
{

    if (r >=rows)
    {
        return;
    }

    for (int i=0;i<cols;i++)
    {
        C[r][i] = A[r][i] + B[r][i];
    }

    matrixSum(A,B,C,rows,cols,r+1);
}