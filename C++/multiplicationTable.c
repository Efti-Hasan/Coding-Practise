#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main()
{
    int row,column,y;
    row=1;
    printf("         Multiplication Table     \n");
    printf("-----------------------------------------\n");

    do
    {
        column=1;
        do
        {
            y=row*column;
            printf("%4d",y);
            column++;
        } 
        while (column<=COLMAX);
        printf("\n");
        row=row+1;

    } 
    while (row<=ROWMAX);
    printf("-----------------------------------------\n");
    getchar();
}