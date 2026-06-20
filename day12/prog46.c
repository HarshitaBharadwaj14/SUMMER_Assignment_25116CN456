#include <stdio.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (original == sum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
