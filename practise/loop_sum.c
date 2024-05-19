#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1)
    {
        sum=sum+i; //1+2+3+4+5+6+7+8+9+10=55
    }
    printf("Sum of the number : %d",sum);

  return 0;
}