#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int matrix[10][10];

    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating sum of primary diagonal elements
    for (i = 0; i < n; i++) {
        sum = sum + matrix[i][i]; 
    }

    printf("\nSum of the primary diagonal elements = %d\n", sum);

    return 0;
}