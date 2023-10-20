#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter First Number :");
    scanf("%d",&n1);
    
    printf("Enter Second Number :");
    scanf("%d",&n2);

    if (n1>n2)
    {
       printf("Large number is :%d",n1);
    }
    else if (n1==n2)
    {
        printf("Number's Are Equal !");
    }
    
    else{
        printf("Large number is :%d",n2);
    }
    getchar();

}