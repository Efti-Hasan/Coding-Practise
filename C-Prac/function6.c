#include<stdio.h>
#include<math.h>
int main()
{
    double base,exp,result=1,i;

    printf("Enter Base :");
    scanf("%lf",&base);
    
    printf("Enter expotenet :");
    scanf("%lf",&exp);

    for ( i = 1; i <= exp; i++)
    {
        result =result * base ;
    }

    printf("Result :%.2lf\n",result);

}