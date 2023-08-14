#include <stdio.h>

int main() {
    int a[] = {10, 2, 15, 20, 35, 46, 85};
    int value, pos = -1, i;

    printf("Enter the item you want to search: ");
    scanf("%d", &value);

    for (i = 0; i < 7; i++) {
        if (value == a[i]) {
            pos = i + 1;
            break;  // Move the break inside this block
        }
    }

    if (pos == -1) {
        printf("Item is not found!\n");
    } else {
        printf("The number is found at position %d\n", pos);
    }

    return 0;
}
