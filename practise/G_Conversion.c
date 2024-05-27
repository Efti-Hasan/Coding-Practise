#include <stdio.h>
#include <ctype.h> // for isupper, islower, toupper, tolower

int main() 
{
    char str[100001]; // Since 1 <= |S| <= 100000, we need an array of size 100001
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ',') 
        {
            str[i] = ' ';
        } 
        else if (isupper(str[i])) 
        {
            str[i] = tolower(str[i]);
        } 
        else if (islower(str[i])) 
        {
            str[i] = toupper(str[i]);
        }
    }

    printf("%s\n", str);
    return 0;
}
