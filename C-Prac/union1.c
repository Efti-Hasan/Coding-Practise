#include<stdio.h>
#include<string.h>

union test1
{
    int x,y;
};

union test2
{
   char ch;
   int x;
};

union test3
{
   char name[20];
   double d;
};

struct test4
{
    int x;
    int y;
   char name[20];
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Sizeof(t1) =%lu\n",sizeof(t1));
    printf("Sizeof(t2) =%lu\n",sizeof(t2));
    printf("Sizeof(t3) =%lu\n",sizeof(t3));
    printf("Sizeof(t4) =%lu\n",sizeof(t4));
}
