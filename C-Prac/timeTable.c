#include<stdio.h>
int main()
{
    while (1)
    {
          int n;
    printf("Enter any digit :");
    scanf("%d",&n);
    for (int i =1; i <=10; i++)
    {
        printf("%d x %d =%d\n",n,i,n*i);
    }
    getchar();
    
    }
    
  
}