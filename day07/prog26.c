#include <stdio.h>

// Recursive function to find nth Fibonacci term
int findFibonacci(int n) {
    // Base cases
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    // Recursive case
    return findFibonacci(n - 1) + findFibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid position greater than 0.\n");
    } else {
        printf("The %dth Fibonacci term is: %d\n", n, findFibonacci(n));
    }

    return 0;
}