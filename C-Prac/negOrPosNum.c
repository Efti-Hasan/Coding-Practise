#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number to check negative or positive :");
    scanf("%d",&n);
    if (n>0)
    {
        printf("Given number are positive :%d",n);

    }
    else if (n==0)
    {
        printf("Given number are Zero!");
    }
    


    else{
        printf("Given number are negative :%d",n);
    }
    
    getchar();

}