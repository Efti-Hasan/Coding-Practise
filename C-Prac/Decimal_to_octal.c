#include<stdio.h>
int main()
{
    int number;
    printf("Enter Decimal number :");
    scanf("%d",&number);
    printf("Octal number is :%o\n",number);
    getchar();

    // Octal to decimal

     int number1;
    printf("Enter Octal number :");
    scanf("%o",&number1);
    printf("Decimal number is :%d\n",number1);

}