#include<stdio.h>
int main()
{
    int number,last;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("Enter the last term : ");
    scanf("%d",&last);
    for(int i=1; i<=last; i=i+1)
    {
        printf("%d X %d = %d\n",number,i,number*i);
    }

    // 3 X 1= 3 
    // 3 X 2= 6
    // 3 X 3= 9
  return 0;
}