#include<stdio.h>
int main()
{
    char lower;
    printf("Enter lower case letter :");
    scanf("%c",&lower);
    printf("The upper case letter is:%c\n",lower-32);
    getchar();

    //Upper case to lowercase 
     char upper;
    printf("Enter uppercase letter :");
    scanf("%c",&upper);
    printf("The lower case letter is:%c",upper+32);
    getchar();
}