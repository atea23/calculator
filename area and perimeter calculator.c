#include <stdio.h>
#include <math.h>

float square_area(float side);
float square_perimeter(float side);
float circle_area(float radius);
float circle_perimeter(float radius);

int main() {
    int choice;
    float side, radius, area, perimeter;

    printf("Select a shape:\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);

            area = square_area(side);
            perimeter = square_perimeter(side);

            printf("Area of the square = %.2f\n", area);
            printf("Perimeter of the square = %.2f\n", perimeter);

            break;
        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);

            area = circle_area(radius);
            perimeter = circle_perimeter(radius);

            printf("Area of the circle = %.2f\n", area);
            printf("Circumference of the circle = %.2f\n", perimeter);

            break;
        default:
            printf("Invalid choice.");
    }

    return 0;
}

float square_area(float side) {
    return side * side;
}

float square_perimeter(float side) {
    return 4 * side;
}

float circle_area(float radius) {
    return M_PI * radius * radius;
}

float circle_perimeter(float radius) {
    return 2 * M_PI * radius;
}

