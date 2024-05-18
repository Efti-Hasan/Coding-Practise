#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
     
     if(tk >=5000)
     {
        printf("Cox jabo\n");

        if(tk>=10000)
        {
            printf("Saint martin jabo\nSwimming korbo\n");
        }
        else
        {
            printf("cox e thkabo\n");
        }
     }
     else
     {
        printf("bashai thakbo\n");
     }

    return 0;
}