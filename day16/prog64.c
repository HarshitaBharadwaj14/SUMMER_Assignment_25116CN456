#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int new_size = 0;

    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        // Check if arr[i] already exists in the unique part of the array
        for (int j = 0; j < new_size; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        // If it's not a duplicate, shift it to the front of the array
        if (!is_duplicate) {
            arr[new_size] = arr[i];
            new_size++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}