#include <stdio.h>
#include <ctype.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

double div(double num1, double num2)
{
    return num1 / num2;
}

void displayResult(int result)
{
    printf("Resultant :%d\n", result);
}

int getsUserOption()
{
    int option; 
    printf("1.Add\n");
    printf("2.Substruction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Choose operator :");
    scanf("%d",&option);
    return option;
}

int main()
{
    int num1, num2;
   int option = getsUserOption();

    printf("Enter 2 numbers :");
    scanf("%d %d", &num1, &num2);

    switch (option)
    {
      case 1:
      printf("Sum :%d\n",add(num1,num2));
        break;
    
      case 2:
      printf("Sub :%d\n",sub(num1,num2));
        break;
    
      case 4:
      printf("Division :%.2lf\n",div(num1,num2));
        break;
    
      case 3:
      printf("Multiplication :%d\n",mul(num1,num2));
        break;
    }

    // displayResult(add(num1, num2));
    // displayResult(sub(num1, num2));

    getchar();
}
