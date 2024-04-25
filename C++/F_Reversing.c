#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(long long int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    
}