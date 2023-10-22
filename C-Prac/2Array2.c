#include<stdio.h>
int main()
{
    int row,col,i,j,numbersOfCols,numbersOfRows;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter the number of rows and col :");
    scanf("%d %d",&numbersOfRows,&numbersOfCols);

    // for scaning A Matrix
    for ( i = 0; i < numbersOfRows; i++)
    {
        for ( j = 0; j < numbersOfCols; j++)
        {   printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // for scaning B matrix
        for ( i = 0; i < numbersOfRows; i++)
    {
        for ( j = 0; j < numbersOfCols; j++)
        {   printf("B[%d][%d] =",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
  // for prining A Matrix

    printf("The Value of A matrix:\t\n");
    for (i = 0; i < numbersOfRows; i++)
    {
        for ( j = 0; j < numbersOfCols; j++)
        {
           printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // for printing B matrix
           
    printf("The Value of B matrix:\t\n");
    for (i = 0; i < numbersOfRows; i++)
    {
        for ( j = 0; j < numbersOfCols; j++)
        {
           printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    
    // sum of C matrix
           
    printf("The Value of C matrix:\t\n");
    for (i = 0; i < numbersOfRows; i++)
    {
        for ( j = 0; j < numbersOfCols; j++)
        {
           C[i][j]=A[i][j]+B[i][j];
        }
        printf("\n");
    }
    
     // for printing C matrix
           
    for (i = 0; i < numbersOfRows; i++)
    {
        for ( j = 0; j < numbersOfCols; j++)
        {
           printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    
}