#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0; i<test;i++)
    {
    char s[101];
    scanf("%s",s);
    int len=strlen(s);

        if(len<=10)
        {
         printf("%s",s);
        }

       if(len >10)
        {
            printf("%c%d%c",s[0],len-2,s[len-1]);
        }
    printf("\n");
    }
   
}