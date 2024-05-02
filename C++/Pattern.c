#include<stdio.h>
int main ()
{   
    int n;
    scanf("%d",&n);
    for (int r = 1; r <=n; r++)
    { 
        for (int s = 1; s <=(n-r) ; s++)
        {
            printf(" ");
        }
        for (int c = 1; c <=(2*r)-1; c++)
        {  
        if (r%2==0)
        {
            printf("-");
        }
        else
        {
         printf("#");
        }
             
        }
        
        printf("\n");    
       
    }

    int k=n-1;
    int j=1;
    for (int r = k; r >=1; r--)
    {  
        for (int s = 1; s <=j ; s++)
        {
            printf(" ");
        }
        for (int col = 1; col <=(2*r)-1; col++)
        {  
        if (r%2==0)
        {
            printf("-");
        }
        else
        {
         printf("#");
        }
            
        }
        
        printf("\n");
        j++;    
       
    }
    
    return 0;
}