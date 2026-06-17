#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop runs 5 times (for characters 'A' to 'E')
    for(i = 0; i < 5; i++) {
        // Inner loop prints the current character (i + 'A') repeated (i + 1) times
        for(j = 0; j <= i; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }
    
    return 0;
}