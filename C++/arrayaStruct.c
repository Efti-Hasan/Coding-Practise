#include <stdio.h>

// Definition of struct for a square
struct square {
    int length;
};

// Definition of struct for a circle
struct circle {
    int radius;
};

// Definition of struct for a rectangle
struct rectangle {
    int width;
    int height;
};

// Enumeration for shape types
enum shapeType { SQUARE, CIRCLE, RECTANGLE };

// Union holding the different shapes
union shapes {
    struct square aSquare;
    struct circle aCircle;
    struct rectangle aRectangle;
};

// Struct to represent a shape, which includes the type and the actual shape
struct shape {
    enum shapeType type;
    union shapes theShape;
};

// Function to calculate the area of a shape
double area(struct shape s) {
    switch (s.type) {
        case SQUARE:
            return s.theShape.aSquare.length * s.theShape.aSquare.length;
        case CIRCLE:
            // Using 3.14159 for PI for a more accurate calculation
            return 3.14159 * s.theShape.aCircle.radius * s.theShape.aCircle.radius;
        case RECTANGLE:
            return s.theShape.aRectangle.height * s.theShape.aRectangle.width;
        default:
            // It's good practice to return 0 and potentially print an error if the type is unknown
            printf("Unknown shape type\n");
            return 0;
    }
}

int main() {
    struct shape shapes[3];

    // Initialize square
    shapes[0].type = SQUARE;
    shapes[0].theShape.aSquare.length = 4;

    // Initialize circle
    shapes[1].type = CIRCLE;
    shapes[1].theShape.aCircle.radius = 3;

    // Initialize rectangle
    shapes[2].type = RECTANGLE;
    shapes[2].theShape.aRectangle.width = 4;
    shapes[2].theShape.aRectangle.height = 5;

    // Compute and print the area of each shape
    for (int i = 0; i < 3; i++) {
        printf("Area of shape %d is: %.2f\n", i + 1, area(shapes[i]));
    }

    return 0;
}
