#include <stdio.h>

// Function declarations
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

int main() {
    float num1 = 10.0, num2 = 5.0;

    printf("\n--- Simple Calculator Automation ---\n");
    printf("Numbers: %.2f and %.2f\n", num1, num2);

    printf("Addition: %.2f\n", add(num1, num2));
    printf("Subtraction: %.2f\n", sub(num1, num2));
    printf("Multiplication: %.2f\n", mul(num1, num2));
    printf("Division: %.2f\n", div(num1, num2));

    printf("✅ Build completed successfully.\n");
    return 0;
}
