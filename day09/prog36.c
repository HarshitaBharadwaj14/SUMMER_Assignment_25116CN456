#include <stdio.h>

int main() {
    int i, j;
    int size = 5; // Size of the square
    
    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size; j++) {
            // Print star if it is the first/last row OR first/last column
            if(i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                // Otherwise print a space for the hollow center
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}