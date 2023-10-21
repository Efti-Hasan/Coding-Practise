#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp,fact;
    printf("Enter number to check Strong :");
    scanf("%d",&num);
    temp=num;
         while (temp!=0)
    {
        rem =temp%10;

        for (int i = 1; i <=rem; i++)
        {
            fact =fact*i;
        }
        

        sum =sum+ rem;
        temp =temp/10;
    }

    if (sum==num)
    {
      printf("%d is a Strong Number.",num);
    
    }
    else{
        printf("%d id not Strong number.",num);
    }

    
    
  
    getchar();
    
}