#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s;
    float area;

    printf("Enter a for Triangle :");
    scanf("%d",&a);
    
    printf("Enter b for Triangle :");
    scanf("%d",&b);
    
    printf("Enter c for Triangle :");
    scanf("%d",&c);

    s =(a+b+c)/2;
    area =sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of the Triangle is :%.2lf",area);

    getchar();
 
}
