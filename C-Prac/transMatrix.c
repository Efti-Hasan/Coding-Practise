#include<stdio.h>
int main()
{
    int row,col,A[10][10],trans[10][10],i,j;
    printf("Enter the rows and cols for the matrix :");
    scanf("%d %d",&row,&col);

    // for scanning A matrix
   printf("Enter the elements of the A matrix :\n");
   for ( i = 0; i < row; i++)
   {
    for ( j = 0; j < col; j++)
    {
       printf("A[%d][%d] =",i,j);
       scanf("%d",&A[i][j]);
    }
    printf("\n");
   }
   
    // for printing A matrix
   printf("A matrix :\n");
   for ( i = 0; i < row; i++)
   {
    for ( j = 0; j < col; j++)
    {
       printf("%d ",A[i][j]);
       
    }
    printf("\n");
   }
   
    // for transpose matrix
//    printf("Transpose matrix is :\n");
   for ( i = 0; i < row; i++)
   {
    for ( j = 0; j < col; j++)
    {
        trans[j][i]=A[i][j];
    }
   }
    // printing transpose matrix
   printf("Transpose matrix is :\n");
   for ( i = 0; i < col; i++)
   {
    for ( j = 0; j <row; j++)
    {
        printf("%d ",trans[i][j]);
       
    }
    printf("\n");
   }
  return 0; 
}