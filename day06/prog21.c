#include <stdio.h>

int main() {
    int decimalNum, remainder;
    long long binaryNum = 0, placeValue = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    int temp = decimalNum;

    while (temp > 0) {
        remainder = temp % 2;
        binaryNum += remainder * placeValue;
        placeValue *= 10;
        temp /= 2;
    }

    printf("Binary equivalent of %d is: %lld\n", decimalNum, binaryNum);

    return 0;
}