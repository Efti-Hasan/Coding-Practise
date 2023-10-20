#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character to check :");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel :%c",ch);
    }
    else{
        printf("Consonant :%c",ch);
    }
    getchar();
    
}