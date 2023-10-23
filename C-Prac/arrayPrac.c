#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],row,col,n,i,j,c1,r1,c2,r2;
    printf("Enter the rows and cols :");
    scanf("%d %d",&row,&col);

    // for scaning A matrix
    printf("Enter value for A matrix :\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
          printf("A[%d][%d] =",i,j);
          scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    
    // for scaning B matrix
    printf("Enter value for B matrix :\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
          printf("B[%d][%d] =",i,j);
          scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    
    // for printing A matrix
    printf("The value of A matrix :\n\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
          printf("\t");
          printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    // for printing B matrix
    printf("The value of B matrix :\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
          printf("\t");
          printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    
    // for printing C matrix
    printf("Enter value for C matrix :\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
          printf("\t");
          C[i][j]= A[i][j] + B[i][j];
          printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    
}