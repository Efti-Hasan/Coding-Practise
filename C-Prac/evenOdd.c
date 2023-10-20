#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number to check even or odd :");
    scanf("%d",&n);
    if (n%2==0)
    {
       printf("Even:%d",n);
    }
    else
    {
        printf("Odd =%d\n",n);

    }

    getchar();
    
}