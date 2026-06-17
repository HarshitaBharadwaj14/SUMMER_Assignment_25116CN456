#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop controls total rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints numbers from 1 up to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}