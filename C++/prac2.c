#include <stdio.h>
int main()
{
    int numbers[] = {10, 20, 30, 40, 50, 100};
    int searchNumber = 100;
    int found = -1;

    for (int i = 1; i < 6; i++)
    {
        if (numbers[i] == searchNumber)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("%d is not found in the array!\n", searchNumber);
    }

    else
    {
        printf("%d is found in %d position!\n", searchNumber, found+1);
    }
    getchar();
}