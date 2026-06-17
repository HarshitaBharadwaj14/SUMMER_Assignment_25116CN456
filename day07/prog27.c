#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    // Base case: if number becomes 0
    if (num == 0) {
        return 0;
    }
    // Recursive case: last digit + sum of remaining digits
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    int positiveNum = num < 0 ? -num : num;

    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(positiveNum));

    return 0;
}