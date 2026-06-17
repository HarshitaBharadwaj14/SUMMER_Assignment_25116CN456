#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    int absExponent = exponent > 0 ? exponent : -exponent;

    // Multiply the base value repeatedly
    for (int i = 1; i <= absExponent; i++) {
        result *= base;
    }

    // If the exponent input was negative, invert the final evaluation
    if (exponent < 0) {
        result = 1.0 / result;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}