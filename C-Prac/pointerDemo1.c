#include<stdio.h>
int main()
{
    int x=5;

    int *ptr;
    ptr =&x;

    // printf("Value of x =%d\n",x);
    // printf("Adress of x =%x\n",&x);
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);

}