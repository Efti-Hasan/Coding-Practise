#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter :");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    
    {
             printf("Capital :%c",ch);
    }
    

    else if (ch>='a' && ch<='z')
    {
        printf("Small :%c",ch);
    }
    else{
        printf("Not a letter!");
    }
    getchar();
}