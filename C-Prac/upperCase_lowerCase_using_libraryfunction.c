#include<stdio.h>
#include<ctype.h>
int main()
{
     char lower,upper;
     printf("Enter lower case letter :");
     scanf("%c",&lower);
     upper=toupper(lower);
     printf("Upper case letter is :%c\n",upper);

    // Upper case to lower case letter 

    char lower1,upper1;
    printf("Enter upper case letter :");
    scanf("%c",&upper1);
    lower1=tolower(upper1);
    printf("Lower case letter is :%c\n",lower1);
}