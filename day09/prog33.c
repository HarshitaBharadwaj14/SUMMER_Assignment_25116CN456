#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop for the number of rows (5 rows)
    for(i = 5; i >= 1; i--) {
        // Inner loop to print stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    
    return 0;
}