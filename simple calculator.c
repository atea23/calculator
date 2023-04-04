#include <stdio.h>
#include <math.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float square_root(float a);
float power(float a, int m);

int main() {
    float num1, num2;
    int option;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Select an operation:\n");
    printf("1. Sum of two numbers\n");
    printf("2. Subtraction of two numbers\n");
    printf("3. Multiplication of two numbers\n");
    printf("4. Division of two numbers\n");
    printf("5. Square root of a number\n");
    printf("6. Power m of a number\n");

    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("%.2f + %.2f = %.2f", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f", num1, num2, subtract(num1, num2));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f", num1, num2, multiply(num1, num2));
            break;
        case 4:
            printf("%.2f / %.2f = %.2f", num1, num2, divide(num1, num2));
            break;
        case 5:
            printf("sqrt(%.2f) = %.2f", num1, square_root(num1));
            break;
        case 6:
            printf("%.2f ^ %d = %.2f", num1, (int)num2, power(num1, (int)num2));
            break;
        default:
            printf("Invalid option selected.");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float square_root(float a) {
    return sqrt(a);
}

float power(float a, int m) {
    return pow(a, m);
}
