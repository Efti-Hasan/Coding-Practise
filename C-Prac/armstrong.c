#include<stdio.h>
int main()
{
    int initnum,finalnum,temp,r,sum=0;
    printf("Enter initial number :");
    scanf("%d",&initnum);
    printf("Enter final number :");
    scanf("%d",&finalnum);

    for (int i = initnum; i <finalnum ; i++)
    {
     temp=i;
    while (temp!=0)
    {
      r =temp%10;
      sum =sum +r*r*r;
      temp=temp/10;
    }
    
    if (sum==i)
    {
        printf("%d,",i);
    }
     sum=0;
    }
    
    getchar();
}