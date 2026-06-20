#include <stdio.h>
long long findFactorial(int n) {
    long long factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i; 
    }

    return factorial;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        
        long long result = findFactorial(num);
        printf("Factorial of %d is: %lld\n", num, result);
    }

    return 0;
}