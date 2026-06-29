#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], prod[10][10];

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication rule check
    if (c1 != r2) {
        printf("Error! Column of first matrix must equal row of second matrix.\n");
        return 0;
    }

    // Input first matrix
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initializing product matrix elements to 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            prod[i][j] = 0;
        }
    }

    // Multiplying matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the result
    printf("\nProduct Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}