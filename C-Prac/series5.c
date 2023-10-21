#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter last digit :");
    scanf("%f",&n);
    printf("1 +1/2+ 1/3+.....1/%.f",n);

    for ( i =1; i <=n; i=i+1)
    {
        sum=sum +1/ i;
    }
    printf(" =%.2f\n",sum);
    getchar();
    
}
