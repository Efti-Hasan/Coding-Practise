#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Eneter N for the last term :");
    scanf("%d",&n);
    for ( row = 1; row <=n; row++)
    {
    //    for ( col = 1; col <= n-row; col++)
    //    {
    //     printf(" ");
    //    }
       for ( col = 1; col <=n; col++)
       {
        if (row==1 || row==n || col==1)
        {
        printf("*");
        }
        else if (col==n)
        {
            printf("   *");
        }
    
      
       }
       printf("\n");
    }
    return 0;
}