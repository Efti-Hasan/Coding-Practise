#include<stdio.h>
int main()
{
    int row,col,i,j,A[10][10],sum=0;
    printf("Enter the numbers of rows and cols :");
    scanf("%d %d",&row,&col);

    // for scanning A matrix
    printf("Enter the elements of A MATRIX :\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           printf("A[%d][%d] =",i,j);
           scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    // for  printing matrix
    printf("The Matrix is :\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           printf("%d ",A[i][j]);
           
        }
        printf("\n");
    }
    
    // for  sum of diagonal matrix
    // printf("The Matrix is :\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           if (i==j)
           {
            sum =sum + A[i][j];
           }
           
        }
        printf("\n");
    }
    printf("Sum:%d",sum);
}