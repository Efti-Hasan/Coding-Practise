#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   long long int arr[n],ans[n];
    for(long int i=0 ; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    // for(int i=n-1; i>=0; i--)
    // {
    //  ans[i]=arr[i];
    // }

     for(int i=n-1; i>=0; i--)
    {
    if (arr[i]==ans[i])
    {
        printf("YES");
        break;
    }
    else
    {
        printf("NO");
        break;
    }
    }
    
    
}