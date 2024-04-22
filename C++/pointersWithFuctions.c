#include<stdio.h>
void func(int x, int y, int *sum, int *diff ,int *mul)
{
    *sum= x+ y;
    *diff= x-y;
    *mul=x*y;
    printf("Sum :%d\n",*sum);
    printf("Dif :%d\n",*diff);
    printf("Multiplication :%d\n",*mul);

}
int main()
{
    int a=10,b=5;
    int sum,diff,mul;

    func(a ,b , &sum, &diff, &mul);
}