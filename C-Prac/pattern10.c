#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N for the last term :");
    scanf("%d",&n);
    for (int row = 1; row<=n; row++)
    {
       for (col = 1; col <n-row; col++) //printing space
       {
        printf(" ");
       }
       
       for (col = 1; col<= row; col++)//printing number
       {
        printf("%d",row);
       }
       printf("\n");
    }

     for (int row = n-1; row>=1; row--)
    {
       for (col = 1; col <n-row; col++) //printing space
       {
        printf(" ");
       }
       
       for (col = 1; col<= row; col++)//printing number
       {
        printf("%d",row);
       }
       printf("\n");
    }
    return 0;
}