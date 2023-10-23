#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="My name is ";
    char str2[]="Efti Hasan ";

    strcat(str1,str2);
    printf("Str1 =%s\n",str1);
    printf("Str2 =%s\n",str1);
    return 0;
}