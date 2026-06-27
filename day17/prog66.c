#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int result[n1 + n2];
    int k = 0; // Tracks size of the union array

    // Copy all elements from arr1
    for (int i = 0; i < n1; i++) {
        result[k++] = arr1[i];
    }

    // Add elements from arr2 if they aren't duplicates
    for (int i = 0; i < n2; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == result[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            result[k++] = arr2[i];
        }
    }

    printf("Union of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}