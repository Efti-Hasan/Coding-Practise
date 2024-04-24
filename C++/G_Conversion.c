#include<stdio.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]==',')
        {
         s[',']=s[' '];
        } 
    }
     printf("%s",s);
}