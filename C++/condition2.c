#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >=100)
    {
        printf("Burger khabo\n");
    }
   else if(tk >=50)
    {
        printf("Fuychkha khabo\n");
    }
    else if( tk>=20)
    {
        printf("ice cream khabp\n");
    }
    else
    {
        printf("Basahi jagaa\n");
    }
   
    return 0;
}