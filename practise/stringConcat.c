#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100]; //apple nut =5
                        //01234 012 //applenut nut
    scanf("%s %s",a,b);

    //Q: a te copy krobo b string
    int k=strlen(a);//5

    for (int i = 0; i <=strlen(b); i++)
    {  
        a[k]=b[i];
        k++;
    }
    printf("%s",a);
    
    return 0;
}