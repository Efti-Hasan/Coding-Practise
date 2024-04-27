#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Dynamically allocate memory for the 2D array
    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL)
     {
        printf("Memory allocation failed!\n");
        exit(1); 
    }

    for (int i = 0; i < rows; i++) 
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) 
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }

    // Input elements of the 2D array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the elements of the 2D array
    printf("The entered array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
