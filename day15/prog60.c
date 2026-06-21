#include <stdio.h>

void moveZeroesToEnd(int arr[], int size) {
    int count = 0; // Index pointer for non-zero elements
    
    // If the element is non-zero, place it at arr[count]
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }
    
    // Fill the remaining spaces with zeroes
    while (count < size) {
        arr[count] = 0;
        count++;
    }
}

int main() {
    int arr[] = {1, 0, 3, 0, 12, 0, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    moveZeroesToEnd(arr, size);
    
    printf("\nAfter moving zeroes: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}