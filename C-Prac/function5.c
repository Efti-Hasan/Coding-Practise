#include<stdio.h>
#include<math.h>
int main()
{
    double base,exp,result;

    printf("Enter Base :");
    scanf("%lf",&base);
    
    printf("Enter expotenet :");
    scanf("%lf",&exp);

   result= pow(base,exp);
    printf("Result :%.2lf\n",result);

}