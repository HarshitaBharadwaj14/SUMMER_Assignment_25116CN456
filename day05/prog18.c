#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum > 0) {
        rem = originalNum % 10;

        // Calculate factorial of the digit 'rem'
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;
        originalNum /= 10;
    }

    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}