#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    long long int sum=0;
    scanf("%d",&n);
    long long int arr[n];
    for (long long int i = 0; i <n; i++)
    {
       scanf("%lld",&arr[i]);
    }
    for(long long int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%lld",abs(sum));
}