#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum=0;

//scanning value for A matrix
        printf("Enter the elements for A matrix:\n");

    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("A[%d][%d]=",i,j);
      scanf("%d",&A[i][j]);    
    }
  printf("\n");
}

    //printing value for A matrix
    printf("\nA matrix:\n");

    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {   printf("\t");
        printf("%d ",A[i][j]);
     
    }
    printf("\n");
}
printf("Elements of diagonal:");

//sum of diagonal eliments
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j)
        {    printf("%d ",A[i][j]);
             sum= sum + A[i][j];
        }
       
    }

}
printf("\nSum of diagonal elements=%d",sum);
  getchar();
}
    
    
    
    

