#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N for the last digit :");
    scanf("%d",&n);

    for ( row = 1; row <=n; row++)
    {
        // printing space
        for ( col = 1; col <=n-row; col++)
        {
            printf(" ");
        }
         // for star print
        for ( col= 1;col <=2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}