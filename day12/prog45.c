#include <stdio.h>
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num = num / 10;
    }

    // Returns 1 if true, 0 if false
    if (original == reversed) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}