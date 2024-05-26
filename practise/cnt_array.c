#include<stdio.h>
int main()
{
     // 1 3 4 0 2 3 1 4 5 7
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt[10]={0}; // 0 0 0 0 0 0 0 0 0 0
    
    for (int i = 0; i < n; i++)
    {
       int val=arr[i];
       cnt[val]++; 
    }
    for (int i = 0; i < 10; i++)
    {
        if(cnt[i]!=0)
        {
         printf("%d -> %d\n",i, cnt[i]);
        }
    }
    
    // printf("1 -> %d\n",cnt[1]);
    // printf("2 -> %d\n",cnt[2]);
    // printf("3 -> %d\n",cnt[3]);
    // printf("4 -> %d\n",cnt[4]);
   

    return 0;
}