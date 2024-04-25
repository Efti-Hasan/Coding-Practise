#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    int val=strcmp(a,b);
    // printf("%d",val);
    if(val >0)
    {
        printf("A is greater\n");
    }
   else if(val < 0)
    {
        printf("B is greater\n");
    }
    else
    {
        printf("Both are same\n");
    }
}