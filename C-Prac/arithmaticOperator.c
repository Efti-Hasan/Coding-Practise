#include<stdio.h>
int main()
{
    int n1,n2,sum;
    float avg;
    printf("Enter two numbers :");
    scanf("%d %d",&n1,&n2);
    printf("Sum =%d\n",sum=n1+n2);
    
    avg=(float)sum/2; //using typecasting
    printf("The average of those number is=%.2lf\n",avg);
    getchar();
}