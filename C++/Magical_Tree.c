#include<stdio.h>

int main ()
{   
    int n;
    scanf("%d",&n);
    int d=(6+(n/2));
    for (int row = 1; row <=d; row++)
    {
       
        for (int s = 1; s <=(d-row) ; s++)
        {
            printf(" ");
        }
        for (int col = 1; col <=(2*row)-1; col++)
        {  
        if (row%2==0)
        {
            printf("*");
        }
        else
        {
         printf("*");
        } 
           
        }   
        printf("\n");
       
    }
    for (int row  =1 ; row<=5; row++)
    {
        for (int i = 1; i <=5; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    


    return 0;
}