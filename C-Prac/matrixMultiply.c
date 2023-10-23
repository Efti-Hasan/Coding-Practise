#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter rows and column for the first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for the second matrix :");
    scanf("%d %d",&r2,&c2);

    while (c1!=r2)
    {
      printf("\nError !! Column of first matrix not equal to second matrix!!\n\n");

      printf("Enter rows and column for the first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for the second matrix :");
    scanf("%d %d",&r2,&c1);
    }
    
    // taking input for first matrix
    printf("Enter element for first matrix :\n");
    for (int i = 0; i < r1; i++)
    {
        for ( int j = 0; j < c1; j++)
        {
            printf("First[%d][%d] =",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    // taking input for the second matrix
    printf("Enter element for second matrix :\n");
    for (int i = 0; i < r2; i++)
    {
        for ( int j = 0; j < c2; j++)
        {
             printf("Second[%d][%d] =",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

    // multiplying matrix
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
               sum = sum + first[i][k] * second [k][j];
              
            }
            result[i][j]=sum;
            sum=0;
        }
        
    }
    




    // printing first matrix

     printf("First Matrix :\n");
      for (int i = 0; i < r1; i++)
    {
        for ( int j = 0; j < c1; j++)
        {   
            printf("\t");
            printf("%d",first[i][j]);
        }
        printf("\n");
    }
    // printing second matrix

     printf("Second Matrix:\n");
      for (int i = 0; i < r2; i++)
    {
        for ( int j = 0; j <c2; j++)
        {   
            printf("\t");
            printf("%d",second[i][j]);
        }
         printf("\n");
    }

    // printing result matrix

     printf("Result Matrix:\n");
      for (int i = 0; i < r1; i++)
    {
        for ( int j = 0; j <c2; j++)
        {   
            printf("\t");
            printf("%d",result[i][j]);
        }
         printf("\n");
    }
        return 0;

}