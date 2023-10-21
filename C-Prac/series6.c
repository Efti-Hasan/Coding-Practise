#include<stdio.h>
int main()
{
    int n,result=1;
    printf("Enter last digit :");
    scanf("%d",&n);
    printf("1 x 3 x 5 x 7 x ....%d",n);
    for (int i = 1; i <=n; i=i+2)
    {
        result= result*i;
      
    }
    printf(" =%d\n",result);
    getchar();
    
}