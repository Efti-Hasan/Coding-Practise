#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter N for factorial :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
       fact =fact *i;
    }
    printf("%d!=%d\n",n,fact);
    getchar();
}