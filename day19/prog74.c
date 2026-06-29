#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10], b[10][10], diff[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input first matrix
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtracting two matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Displaying the result
    printf("\nDifference of two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}