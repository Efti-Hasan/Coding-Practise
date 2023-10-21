#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter last digit :");
    scanf("%d",&n);
  
    {
        for (int i = 1; i <=n; i=i+2)
    {
        sum =sum +i;
    }
    printf("1+3+5+7...%d=%d\n",n,sum);
    }
    
  
    getchar();

    
}