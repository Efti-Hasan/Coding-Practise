#include<stdio.h>
int main()
{
    // Hexa-decimal to octal
    int number;
    printf("Enter Hexa-Decimal number :");
    scanf("%x",&number);
    printf("Octal number is :%o\n",number);
    getchar();

    // Octal to Hexa-decimal

     int number1;
    printf("Enter Octal number :");
    scanf("%o",&number1);
    printf("Hexa-Decimal number is :%x\n",number1);

}