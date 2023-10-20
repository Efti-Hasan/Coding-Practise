#include <stdio.h>

int main() {
    int num_boxes;
    scanf("%d", &num_boxes); // Read the number of boxes

    for (int i = 0; i < num_boxes; i++) {
        int length, width, height;
        scanf("%d %d %d", &length, &width, &height); // Read the dimensions of the box

        if (height < 41) { // Check if the box can pass through the tunnel
            int volume = length * width * height; // Calculate the volume
            printf("%d\n", volume); // Print the volume
        }
    }

    return 0;
}
