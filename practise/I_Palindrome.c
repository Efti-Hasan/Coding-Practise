#include <stdio.h>
#include <string.h>

int main() {
    char str[1001]; // Maximum length of 1000 characters + null terminator
    scanf("%s", str);
    
    int len = strlen(str);
    int isPalindrome = 1; // Assume the string is a palindrome initially

    // Compare characters from the beginning and the end
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
