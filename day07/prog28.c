#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int num, int rev) {
    // Base case: when number becomes 0
    if (num == 0) {
        return rev;
    }
    // Recursive case: push last digit into rev and divide num by 10
    rev = (rev * 10) + (num % 10);
    return reverseNumber(num / 10, rev);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = reverseNumber(num, 0);
    
    printf("Reversed number: %d\n", result);

    return 0;
}