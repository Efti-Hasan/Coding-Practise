#include<stdio.h>
#include<string.h>
int main()
{

    char str1[]="Efti Hasan";
    char str2[]="Efti Hasan";

  int d= strcmp(str1,str2);
  if (d==0)
  {
   printf("String are equa.\n");
  }
  else{
    printf("String are not equal.\n");
  }
    
    return 0;
}