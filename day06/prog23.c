#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;

    // Loop runs until all bits are processed
    while (temp > 0) {
        // Check if the last bit is 1
        if (temp % 2 == 1) {
            count++;
        }
        // Shift right by dividing by 2 to inspect the next bit
        temp /= 2;
    }

    printf("The number of set bits (1s) in %d is: %d\n", num, count);

    return 0;
}