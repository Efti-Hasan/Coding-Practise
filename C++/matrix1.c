#include <stdio.h>
int main()
{
    int rows, columns,sum=1;
    printf("Enter the rows and column :");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    printf("Enter the value for matrix :\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("A[%d][%d] =",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("Given matrix is :\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
           if (i==j)
           {
              sum =sum *matrix[i][j];
           }
        }
    }
    printf("Sum of diagonal of matrix :%d\n",sum);

//     // for transpose matrix

//    printf("The transpose of equvallent matrix :\n");

//     for (int i = 0; i < columns; i++)
//     {
//         for (int j = 0; j < rows; j++)
//         {
//             printf("%d ",matrix[j][i]);
//         }
//         printf("\n");
//     }
    getchar();
}