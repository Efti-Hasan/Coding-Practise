#include<stdio.h>
int main()
{
    int i=0,sum=0;
    FILE *f1;
    f1=fopen("int_data.txt","w");
    for(i=10; i<15; i++) putw(i,f1);

    fclose(f1);
    f1=fopen("int_data.txt","r");
    while((i=getw(f1))!=EOF)
    {
        sum+=i;
        printf("Binary file : %d\n",i);
    }
    printf("Sum : %d\n",sum);
}