#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int a[n+1]; //5
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]); // 10  20 30 40 50 {arrray} // 10 100 20 30 40 50
                           //  0   1  2  3  4 {index}  // arr[5]=arr[4]
                                                        // arr[4]=arr[3]
                                                        // arr[3]=arr[2]
                                                        // arr[2]=arr[1]
                           //  10 100 20 30 40 50
                           //  0   1  2  3  4  5 {index}
                           // 


    }   
      int pos ,val;
      scanf("%d %d",& pos,&val);
      for(int i= n ; i >= pos+1; i--)
      {
        a[i]=a[i-1];
      }
    a[pos]=val;
    for (int i = 0; i <=n ; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}