#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt1=0,cnt2=0;
   long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    
    for(long long int i=0;i<n;i++)
    {
     if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
      {
            cnt1++;
        } 
        else
         {
            if (arr[i] % 2 == 0)
             {
                cnt1++;
            }
            if (arr[i] % 3 == 0) 
            {
                cnt2++;
            }
        }
          
    }

    printf("%d %d",cnt1,cnt2);

}