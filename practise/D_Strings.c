#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);
    int len1=strlen(a);
    int len2=strlen(b);
    printf("%d %d\n",len1,len2);
    char c[11];
    strcpy(c,a);
    strcat(c,b);
    printf("%s\n",c);
    int temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s",a,b);
    
    return 0;
}