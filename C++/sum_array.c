#include <stdio.h>

int main() 
{
   int a[5],sum=0,i;
   printf("Enter 5 numbers=");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
       sum=sum+a[i];
   }
   printf("The sum is=%d\n",sum);
printf("The avarege is=%.2lf",(float)sum/5);
}

