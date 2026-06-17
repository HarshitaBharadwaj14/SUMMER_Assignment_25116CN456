#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop controls the stopping point of the inner loop
    for(i = 5; i >= 1; i--) {
        // Inner loop prints numbers from 1 up to i
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}