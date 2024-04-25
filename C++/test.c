#include<stdio.h>
int main()
{
   long long int n;
    scanf("%lld",&n);
    for(long long int i=1;i<=10;i++)
    {
        printf("%lld X %lld =%lld\n",n,i,i*n);
    }
}