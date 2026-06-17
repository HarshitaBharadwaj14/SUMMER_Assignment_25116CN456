#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = 1; i <= rows; i++) {
        // Loop to print leading spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Loop to print increasing characters ('A', 'B', 'C'...)
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        // Loop to print decreasing characters back down to 'A'
        for(j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}