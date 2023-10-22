#include<stdio.h>
int main()
{
    int array1[5],array2[5],n;
    printf("Enter how many numbers :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array1[i]);
    }
    
    printf("Array1 :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array1[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        array2[i]=array1[i];
        
    }
     printf("\nArray2 is :");
     for (int i = 0; i < n; i++)
     {
        printf("%d ",array2[i]);
     }
     
   
}