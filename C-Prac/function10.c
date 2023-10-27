#include<stdio.h>

int fact (int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
   int result= fact(10);
   printf("Factorial of 10 =%d\n",result);

}
