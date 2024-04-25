#include <stdio.h>
#include <string.h>

int main() 
{
    char c[100];
    scanf("%s",&c);

    int d[26] = {0};
    
    for (int i = 0; i < strlen(c); i++) 
    {
        int val = c[i] - 'a';
        d[val]++;
    }

    for (char ch = 'a'; ch <= 'z'; ch++) 
    {
        int val = ch - 'a';
        if (d[val] != 0) 
        {
            printf("%c - %d\n", ch, d[val]);
            d[val] = 0; 
        }
    }
    return 0;
}
