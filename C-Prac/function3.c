#include<stdio.h>
double triangleArea(double b,double h)
{
       return 0.5*b*h ;
}
int main()
{
    double base,height;

    printf("Enter Base for Triangle :");
    scanf("%lf",&base);
    printf("Enter Height for Triangle :");
    scanf("%lf",&height);

   double area= triangleArea(base,height);

    printf("The area of triangle is :%.2lf\n",area);
    getchar();
}
