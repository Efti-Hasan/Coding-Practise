#include<stdio.h>
#include<string.h>

int main() {
    char s[101], t[101];
    scanf("%s %s", s, t);
    int sl = strlen(s);
    int tl = strlen(t);
    
    printf("%d %d\n", sl, tl);
    printf("%s\n", strcat(s, t)); // Concatenate strings and print
    
    // Swap first characters of s and t
    char temp = s[0];
    s[0] = t[0];
    t[0] = temp;
    
    for(int i=0; i<sl;i++)
    {
        printf("%c",s[i]);
    }
    printf(" ");
    for(int i=0; i<tl;i++)
    {
        printf("%c",t[i]);
    }

    return 0;
}
