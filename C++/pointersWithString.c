#include<stdio.h>

int main() {
    int arr[4] = {5, 10, 15, 20};
    int *ptr[4], j, i;

    for (j = 0, i = 0; j < 4 && i < 4; j++, i++) {
        ptr[j] = &arr[j];
    }

    for (j = 0; j < 4; j++) {
        printf("pa[%d]=%d\n ", j, (void *)ptr[j]);
        printf("*pa[%d]=%d\n", j, *ptr[j]);
    }

    return 0;
}
