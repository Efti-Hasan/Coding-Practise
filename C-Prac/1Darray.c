#include<stdio.h>
int main()
{
    int num[5],sum=0;
    printf("Enter 5number :");
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&num[i]);
    }
    

    for ( int i = 0; i <5; i++)
    {
        sum =sum + num[i];
       
    }
     printf("Sum :%d\n",sum);
     printf("Avg :%.2lf ",(float)sum/5);
    

}