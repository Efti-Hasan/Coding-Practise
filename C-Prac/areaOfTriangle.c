#include<stdio.h>
int main()
{
    double height,base,area;
    printf("Enter Base:");
    scanf("%lf",&height);
    printf("Enter Height:");
    scanf("%lf",&base);
    area =0.5*base*height;
    printf("Area of Triangle is :%.2lf",area);

    getchar();

}