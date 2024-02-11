#include<stdio.h>
#include<ctype.h>
int main()
{
    int row,col,y;

        printf("         Multiplication Table     \n");
    printf("-----------------------------------------\n");

    for ( row = 1; row <=12; row++)
    {
        for ( col = 1; col<=10; col++)
        {
            y=row*col;
            printf("%4d",y);
        }
        printf("\n");
    }
    printf("-----------------------------------------\n");
    getchar();
}