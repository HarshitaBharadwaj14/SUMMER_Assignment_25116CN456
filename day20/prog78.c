#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;
    int matrix[10][10];

    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry condition
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break;
            }
        }
    }

    if (isSymmetric == 1) {
        printf("\nThe matrix is a Symmetric Matrix.\n");
    } else {
        printf("\nThe matrix is NOT a Symmetric Matrix.\n");
    }

    return 0;
}