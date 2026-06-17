#include <stdio.h>

// Recursive function to calculate factorial
int findFactorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    return n * findFactorial(n - 1);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is: %d\n", num, findFactorial(num));
    }

    return 0;
}