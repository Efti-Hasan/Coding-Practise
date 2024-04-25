#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;
    
     scanf("%d",&arr[n]);
    
    while(n!=0)
    {
        int temp=arr[n]%10;
       sum+=temp;
       arr[n]/=10;
    }
       
    
    printf("%d",sum);
}