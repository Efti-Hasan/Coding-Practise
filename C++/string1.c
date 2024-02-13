#include <stdio.h>
#include <ctype.h>
int main()
{   
    int numberOfLetters =0;
    int numberOfdigits =0;
    int numberOfspaces =0;
    int numberOfWords =0;
    int numberOfVowels =0;
w
    char text[] = {"I love C Programming 2024"};

    for (int index = 0; text[index] != '\0'; index++)
    {
       char currentLetter =text[index];
    //    is letter or not
    if ((currentLetter >='a' && currentLetter <='z') || (currentLetter >='A' && currentLetter <='Z') )
    {
       numberOfLetters++;
    }
    // checkk digit or not
    if ((currentLetter >='0' && currentLetter <='9') )
    {
       numberOfdigits++;
    }

    if (currentLetter ==' ')
    {
       numberOfspaces++;
    }

    currentLetter=tolower(currentLetter);
    if (currentLetter =='a'|| 
        currentLetter =='e'|| 
        currentLetter =='i'|| 
        currentLetter =='o'|| 
        currentLetter =='u')
      
    {
       numberOfVowels++;
    }

    }
    printf("Number of Letter %d\n ",numberOfLetters);
    printf("Number of Digit %d\n ",numberOfdigits);
    printf("Number of Space %d\n ",numberOfspaces);
    printf("Number of Words %d\n ",numberOfspaces+1);
    printf("Number of Vowels %d\n ",numberOfVowels);
    // printf("%s\n", text);
    getchar();
}