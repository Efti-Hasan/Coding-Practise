#include<stdio.h>
int main()
{
    char *name="This is Efti Hasan";
    int cnt=0;
    
    while (*name!='\0')
    {
        name++;
        cnt++;
    }
    printf("Length of string : %d\n",cnt);
}