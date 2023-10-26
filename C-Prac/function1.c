#include<stdio.h>
void sum (int a,int b,int c)
{
    printf("The Sum is :%d\n", a+b+c);
}

void sub (int a,int b)
{
    printf("The Substrucion is :%d\n", a-b);
}

int main()
{
    sum(40,40,30);
    sum(90,20,30);
    sum(10,40,30);
    sub(10,5);
    // int num1,num2;
    // printf("Enter two numbers : ");
    // scanf("%d %d",&num1,&num2);

    // printf("The sum is :%d\n",sum(4,4,2));
    // printf("The sum is :%d\n",sum(10,24,7));
    // printf("The sum is :%d\n",sum(25,28,9));
}