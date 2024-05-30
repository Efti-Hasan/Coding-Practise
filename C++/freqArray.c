#include<stdio.h>
int main()
{

    // 10
    // 1 4 0 2 5 7 1 4 0 9
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt[10]={0};
    for(int i=0; i<n; i++)
    {
        // if(arr[i]==0)
        // {
        //     cntZ++;
        // }
        // if(arr[i]==1)
        // {
        //     cntO++;
        // }
        // if(arr[i]==2)
        // {
        //     cntT++;
        // }
        int val=arr[i];
        cnt[val]++;
    }

    for (int i = 0; i < 10; i++)
    {
       if(cnt[i]!=0)
       {
        printf("%d->%d\n",i,cnt[i]);
       }
    }
      
    // printf("1->%d\n",cnt[1]);
    // printf("2->%d\n",cnt[2]);
    return 0;
}