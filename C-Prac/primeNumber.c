#include<stdio.h>
int main()
{
    int num,n,i,count=0;
    printf("Enter any positive number :");
    scanf("%d",&num);
    for (i = 2; i <num; i++)
    {
        if (num%i==0)
        {
           count++;
           break;
        }
        
    }
    if (count==0)
    {
       printf("%d is prime number.\n",num);
    }

    else{
         printf("%d is not prime number.\n",num);
    }
    
        getchar();
    
}