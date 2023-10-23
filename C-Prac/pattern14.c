#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N for the last digit :");
    scanf("%d",&n);

    for (row = n; row >=1; row--)
    {
        for ( col = 1; col<=n-row; col++)   //printing space
        {
            printf(" ");
        }
        for ( col = 1; col <= 2*row-1; col++) //printing star
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}