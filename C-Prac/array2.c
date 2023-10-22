// write a program that can take some numbers and display maximux
#include<stdio.h>
int main()
{
    int num[100],sum=0,n;
    printf("How many number :");
     scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    
   int max=num[0];
   for (int i = 1; i < n; i++)
   {
    if (max<num[i])
    {
       max=num[i];
    }
    
   }
   printf("Maximum :%d\n",max);
    getchar();

}