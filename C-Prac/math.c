#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,power,root,SIN;
    printf("Enter X :");
    scanf("%lf",&x);
    printf("Enter Y :");
    scanf("%lf",&y);

    // power=pow(x,y);
    // printf("POWER =%lf",power);
    // getchar();

    // root=sqrt(x);
    // printf("Square root :%lf",root);

      SIN=(float)sin(x);
      printf("Sin(%lf)=%.2lf",x,SIN);
}