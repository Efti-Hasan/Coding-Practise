#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter last digit :");
    scanf("%f",&n);
    printf("1*1+2*2+3*3.....%.f*%.f",n,n);

    for ( i =1; i <=n; i=i+1)
    {
        sum=sum +i*i;
    }
    printf(" =%.f\n",sum);
    getchar();
    
}