#include<stdio.h>
int main()
{
    int num,multiple,n;
    printf("Enter number for multiple :");
    scanf("%d",&num);
    printf("Last digit for multiple :");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++)
    {
        multiple=num*i;
        printf("%d * %d =%d\n",num,i,multiple);
    }
    
getchar();
}