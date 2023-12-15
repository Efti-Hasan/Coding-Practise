#include <stdio.h>
int main()
{
  int i, j, numbers, sumOfeven = 0, sumOfodd = 0;

  printf("Enter how many numbers you want to sum :");
  scanf("%d", &numbers);

  printf("Enter numbers :");
  for (i = 1; i <= numbers; i++)
  {
    scanf("%d", &j);

    if (j % 2 == 0)
    {
      sumOfeven = sumOfeven + j;
    }

    else
    {
      sumOfodd = sumOfodd + j;
    }
  }
  printf("Sum of Even :%d\n", sumOfeven);
  printf("Sum of Odd :%d\n", sumOfodd);

  return 0;
}