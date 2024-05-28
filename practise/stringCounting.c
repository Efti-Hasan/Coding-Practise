#include<stdio.h>
#include<string.h>
int main()
{

    char s[100];//10
    scanf("%s",s);// acaecfejja
    int cnt[26]={0};
    
    for(int i=0; i<strlen(s); i++)
    {
        int val=s[i]-'a';//a=97
                     //A=65
        cnt[val]++;
    }

    for(int i=0; i<strlen(s); i++)
    {
        int val=s[i]-'a';
        if(cnt[val]!=0)
        {
          printf("%c -> %d\n",val+'a',cnt[val]);
        }
        cnt[val]=0;
    }



    return 0;
}