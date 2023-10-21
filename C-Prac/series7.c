#include<stdio.h>
int main()
{
    int n,result=1;
    printf("Enter last digit :");
    scanf("%d",&n);
    printf("1*1 x 3*2 x 5*2 x ....%d*2",n);
    for (int i = 1; i <=n; i=i+2)
    {
        result= result*i*i;
      
    }
    printf(" =%d\n",result);
    getchar();
    
}