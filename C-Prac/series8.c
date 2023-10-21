#include<stdio.h>
int main()
{
    int n,result=1;
    printf("Enter last digit :");
    scanf("%d",&n);
    printf("2*2 x 4*2 x 6*2 x ....%d*2",n);
    for (int i = 2; i <=n; i=i+2)
    {
        result= result*i*i;
      
    }
    printf(" =%d\n",result);
    getchar();
    
}