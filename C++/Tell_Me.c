#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
     int n;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
     scanf("%lld",&arr[i]);
    }
    long long int val;
    scanf("%lld",&val);
    int found=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==val)
        {
           found++;
           break;
        }
    }
    if(found==1){
        printf("YES\n");
    }
 else
    {
        printf("NO\n");
    }
    }
   
}