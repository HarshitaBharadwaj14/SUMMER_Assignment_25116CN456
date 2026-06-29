#include <stdio.h>

int main() {
    int r, c, i, j, colSum;
    int matrix[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nColumn-wise Sums:\n");
    // Outer loop runs for columns, inner loop runs for rows
    for (j = 0; j < c; j++) {
        colSum = 0; // Reset sum for each new column
        for (i = 0; i < r; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    return 0;
}