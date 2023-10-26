#include<stdio.h>

void calculatePower(double base,double exp)
{
    double result=1,i;
   for ( i = 1; i <=exp; i++)
   {
    result =result*base;
   }
    printf("%.2lf\n",result);
}

int main()
{
    // double base,exp;

    // printf("Enter base =");
    // scanf("%lf",&base);
    
    // printf("Enter Expotent =");
    // scanf("%lf",&exp);

    calculatePower(2,9);
    calculatePower(2,8);
    calculatePower(2,7);
}