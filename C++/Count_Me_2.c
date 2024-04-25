#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char s[100001];
    scanf("%s",s);
    int len = strlen(s);
    int cnt1 = 0,cnt2 = 0;

    for (int i = 0; i < len; i++) 
    {
       
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
        {
            cnt1++;
        }
         else 
        {
            cnt2++;
        }
    }
    printf("%d\n",cnt2); 

    return 0;
}
