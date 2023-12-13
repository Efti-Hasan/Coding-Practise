#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;
    printf("Enter Radius :");
    scanf("%f",&radius);

    area=M_PI*radius*radius;
    printf("Area of the trianle is :%.2f\n",area);
    
    return 0;
}
