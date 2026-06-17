#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = 1; i <= rows; i++) {
        // Loop to print leading spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Loop to print stars (1, 3, 5, 7, 9)
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}