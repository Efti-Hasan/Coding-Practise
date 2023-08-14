#include<stdio.h>
int main()
{
    int A[10][10],row,col,i,j,transpose[10][10];
printf("Enter the Rows & Column for matrix:");
scanf("%d %d",&row,&col);

//scanning value for A matrix
        printf("Enter the elements for A matrix:\n");

    for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("A[%d][%d]=",i,j);
      scanf("%d",&A[i][j]);    
    }
  printf("\n");
}

//transpsose
for(i=0;i<row;i++){
    for(j=0;j<col;j++)
    {
        transpose[j][i]=A[i][j];
    }
}
    
    //printing value for A matrix
        printf("A matrix=\n");

    for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {   printf("\t");
        printf("%d ",A[i][j]);
     
    }
    printf("\n");
}
   //printing transpose matrix
   printf("\nTranspose Matrix:\n");
   for(i=0;i<col;i++)
   {
      for(j=0;j<row;j++)
      {
          printf("%d ",transpose[i][j]);
      }
      printf("\n");
   }
  
    
    
    
    
}
