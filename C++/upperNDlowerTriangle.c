#include<stdio.h>
int main()
{
    int A[3][3],i,j,upperSum=0,lowerSum=0;

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

//sum of upper&lower triangle eliments
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i<j)
        {   // printf("%d ",A[i][j]);
             upperSum= upperSum + A[i][j];
        }
        if(j<i)
       {
           lowerSum=lowerSum+A[i][j];
       }
    }

}
printf("Sum of upper triangle elements=%d\n",upperSum);
printf("Sum of lower triangle elements=%d\n",lowerSum);

  getchar();
}