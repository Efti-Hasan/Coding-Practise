#include<stdio.h>
#include<string.h>
int main()
{
    char str1[15]="Bangladesh";
    char str2[15]="India";
    char temp[15];


     //before swapping
    printf("str1 =%s\n\n",str1);
    printf("str2 =%s\n\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    // after swapping
    printf("str1 =%s\n\n",str1);
    printf("str2 =%s\n\n",str2);
}