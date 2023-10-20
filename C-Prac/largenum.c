#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter Number one :");
    scanf("%d",&n1);

    printf("Enter Number two :");
    scanf("%d",&n2);
    if (n1>n2)
    {
        printf("Large :%d",n1);
    }
   else if (n1<n2)
    {
        printf("Large :%d",n2);
    }

    else{
    printf("Numbers are Equal!!");
    }
    
    getchar();
}