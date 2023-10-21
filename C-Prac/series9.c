#include<stdio.h>
int main()
{  
    int n,even=0,odd=0;
    printf("Enter the last term :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
      if (i%2==0)
      {
       even=even +i;

      }
      else{
        odd=odd+i;
      }
      
    }
    printf("Sum:%d\n",odd-even);
    getchar();

}