#include<stdio.h>
int main()
{
    float mark;
    printf("Enter your marks :");
    scanf("%f",&mark);

    if (mark>100)
    {
       printf("Mark is invalid!!");
    }

    else if (mark<0)
    {
         printf("Mark is invalid!!");
    }
    

   else if (mark>=80)
    {
        printf("Your grade is :A+");
    }

    else  if (mark>=70)
    {
        printf("Your grade is :A");
    }

    else  if (mark>=60)
    {
        printf("Your grade is :A-");
    }

    else  if (mark>=50)
    {
        printf("Your grade is :B");
    }

    else  if (mark>=40)
    {
        printf("Your grade is :c");
    }
    else  if (mark>33)
    {
        printf("Your grade is :D");
    }

  else 
    {
        printf("Your grade is :Fail");
    }

   
    

    
}