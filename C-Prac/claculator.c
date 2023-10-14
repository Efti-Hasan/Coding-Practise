#include<stdio.h>
int main()
{
    double num1,num2,result;
    char ch;
    printf("Choose operator(+,-,*,/) =");
    scanf("%c",&ch);
    printf("Enter two integers :");
    scanf("%lf %lf",&num1,&num2);

    if (ch=='+')
    {
       result=num1 + num2;
       printf("Sum =%.2lf",result);
    }

   else if (ch=='-')
    {
       result=num1 - num2;
       printf("Substraction =%.2lf",result);
    }

   else if (ch=='*')
   {
       result =num1 * num2;
       printf("Multiple =%.2lf",result);
    }
   else if (ch=='/')
    {
       result=num1 / num2;
       printf("devision =%.2lf",result);
    }

  else{
   printf("You have pressed invalid operators!!!\n");
   printf("Try again ASAP :)\n");
  } 
    getchar();
}