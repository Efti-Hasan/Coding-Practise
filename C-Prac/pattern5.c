#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter n for last term :");
    scanf("%d",&n);
    for ( row = n; row >=1; row--)
    {
        for (col = 1; col<=row; col++)
        {
            printf("%c ",col+64);
        }
        printf("\n");
    }
    
}