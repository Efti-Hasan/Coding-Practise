#include<stdio.h>
int main()
{
    int i,j,numbersOfRows,numbersOfCols;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter the number of Rows and Col:");
    scanf("%d %d",&numbersOfRows,&numbersOfRows);
    printf("Enter elements for A matrix\n");
    for(i=0;i<numbersOfRows;i++)
    {
        for(j=0;j<numbersOfRows;j++)
        {printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);   
        }
        printf("\n");
    }
      printf("Enter elements for B matrix\n");
    for(i=0;i<numbersOfRows;i++)
    {
        for(j=0;j<numbersOfRows;j++)
        {printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);   
        }
        printf("\n");
    }
    printf("A=");
    for(i=0;i<numbersOfRows;i++)
    {printf("\t");
        for(j=0;j<numbersOfRows;j++)
        {printf("%d ",A[i][j]);}
        printf("\n");
    }
    
    printf("\nB=");
    for(i=0;i<numbersOfRows;i++)
    {printf("\t");
        for(j=0;j<numbersOfRows;j++)
        {printf("%d ",B[i][j]);}
        printf("\n");
    }
       
    for(i=0;i<numbersOfRows;i++)
    {
        for(j=0;j<numbersOfRows;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("\n(A+B)=");
    for(i=0;i<numbersOfRows;i++)
    {

        for(j=0;j<numbersOfRows;j++)
        {printf("%d ",C[i][j]);}
        printf("\n");
        printf("\t");
    }
        getchar();
}
