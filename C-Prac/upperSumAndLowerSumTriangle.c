#include<stdio.h>
int main()
{
    int row,col,i,j,A[10][10],upperSum=0,lowerSum=0;
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
    
    // for  printing lowerSum & upperSum

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           if (i<j)
           {
            upperSum =upperSum +A[i][j];
            
           }
           if (i>j)
           {
            lowerSum =lowerSum +A[i][j];
           }
    
        }
        printf("\n");
    }

           printf("\nSum of upper triangle elements =%d\n",upperSum);
           printf("\nSum of lower triangle elements =%d\n",lowerSum);
           return 0;
}