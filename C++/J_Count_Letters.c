#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000001]; // Increased size to accommodate the maximum possible input size
    int cnt[26] = {0};

    // Using fgets to read input until EOF
    while (fgets(s, sizeof(s), stdin) != NULL) 
    {
        for (int i = 0; i < strlen(s); i++) 
        {
            if (s[i] >= 'a' && s[i] <= 'z') 
            {
                int val = s[i] - 'a';
                cnt[val]++;
            }
        }
    }

    for (int i = 0; i < 26; i++) 
    {
        if (cnt[i] > 0) 
        {
            printf("%c : %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}
