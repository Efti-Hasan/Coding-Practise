#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    int sz=strlen(s);
    int count=0;
    int i=0;
  for(i=0; i<sz;i++)
  {
    count ++;
  }
  
  printf("%d \n",sz);
    printf("Total digit :%d ",count);
      
}