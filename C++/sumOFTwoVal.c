#include<stdio.h>
int main()
{
    //  j=i+1
    //  i
    //  0  1  2  3  4    // arr[i] + arr[j] ==8
    //  1  4  5  3  2
    // 8
    int n;//5
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,cnt=0;
    scanf("%d",&x);
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
           if( arr[i] + arr[j] ==x)
           {
           cnt++;
           break;

           }
        }
    }
    if(cnt==0) printf("False");
    else printf("True");

    return 0;
}