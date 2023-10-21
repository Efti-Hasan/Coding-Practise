#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N for the last digit :");
    scanf("%d",&n);
    for (int row = 1; row <=n; row++)
    {
        for ( col = 1; col<=row; col++)
        {
           printf("%d ",row*col);
        }
        printf("\n");
    }
    return 0;
    
}