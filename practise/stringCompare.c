#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);

     //case :01
     //abcd abc -> b string choto 
     // >0

    //  case :2
    //abc abcd -> a string choto
     //<0

     //case :3
     //abcd abcd ->same
    //0

    // case 4
    //abcd eft ->a string choto

    int v=strcmp(a,b);
    if(v<0)
    {
        printf("A smaller\n");
    }
    else if(v>0)
    {
        printf("B is smaller\n");
    }
    else
    printf("Same\n");
    return 0;
}