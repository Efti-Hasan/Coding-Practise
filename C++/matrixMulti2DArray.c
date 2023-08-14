#include <stdio.h>

int main() {
    int i, j, r1, c1, r2, c2, first[10][10], second[10][10], result[10][10], sum = 0, k;

    printf("Enter rows and column for first matrix:");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and column for second matrix:");
    scanf("%d%d", &r2, &c2);

    while (c1 != r2) {
        printf("Error!!! Column of the first matrix is not equal to the second matrix!!\n");

        printf("Enter rows and column for the first matrix:");
        scanf("%d%d", &r1, &c1);

        printf("Enter rows and column for the second matrix:");
        scanf("%d%d", &r2, &c2);
    }

    printf("\nEnter elements for the First Matrix:\n");
    // Taking input for the first matrix
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("First[%d][%d]=", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    printf("\nEnter elements for the Second Matrix:\n");
    // Taking input for the second matrix
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Second[%d][%d]=", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Multiplying matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) 
        {
            for (k = 0; k < c1; k++) 
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0; // Reset sum for the next iteration
        }
    }

    // Printing first matrix
    printf("\n\nFirst Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    // Printing second matrix
    printf("\n\nSecond Matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    // Printing RESULT matrix
    printf("\n\nResult Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    getchar(); // This getchar() is not necessary here.
    return 0;
}
