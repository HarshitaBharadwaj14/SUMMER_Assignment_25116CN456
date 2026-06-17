#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = rows; i >= 1; i--) {
        // Loop to print leading spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Loop to print stars (9, 7, 5, 3, 1)
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}