#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[10][10], transpose[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input matrix elements
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transposing the matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Displaying the transposed matrix
    // Note: Rows and columns are swapped in the display loops
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}