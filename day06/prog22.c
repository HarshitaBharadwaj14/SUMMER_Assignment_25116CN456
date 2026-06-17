#include <stdio.h>

int main() {
    long long binaryNum;
    int decimalNum = 0, remainder, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    long long temp = binaryNum;

    while (temp > 0) {
        remainder = temp % 10;
        decimalNum += remainder * base;
        base *= 2;
        temp /= 10;
    }

    printf("Decimal equivalent of %lld is: %d\n", binaryNum, decimalNum);

    return 0;
}