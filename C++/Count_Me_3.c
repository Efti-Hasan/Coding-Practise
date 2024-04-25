#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0; i<test ; i++)
    {
        char s[10001];
        scanf("%s",s);
        int len=strlen(s);
        int capitalCount=0,smallCount=0,digit=0;

        for(int i=0; i<len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') 
            {
            capitalCount++;
          }
          
            if (s[i] >= 'a' && s[i] <= 'z') 
            {
            smallCount++;
          }
            if (s[i] >= '0' && s[i] <= '9') 
            {
            digit++;
          }

        }
        printf("%d %d %d\n",capitalCount,smallCount,digit);
    }
    
}