#include<stdio.h>
int main()
{
    int numbers[]={10,20,30,40};
    int legthOfArray=sizeof(numbers)/sizeof(numbers[0]);
    printf("Length of Array :%d\n",legthOfArray);

    if (legthOfArray <2)
    {
      printf("Array should have at least 2 elements!.\n");
    }

    int first,second;

    if(numbers[1] > numbers[0])
    {
        first=numbers[1];
        second=numbers[0];
    }
    
   else
    {
        first=numbers[0];
        second=numbers[1];
    }
    printf("First largest :%d\n",first);
    printf("Second largest :%d\n",second);
}