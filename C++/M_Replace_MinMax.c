#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find maximum and minimum elements and their indices in the array
    int max = arr[0];
    int min = arr[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    // Exchange minimum element with maximum element
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
