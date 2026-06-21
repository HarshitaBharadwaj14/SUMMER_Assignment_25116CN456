#include <stdio.h>

void rotateRightByOne(int arr[], int size) {
    if (size <= 1) return;
    
    // Store the last element
    int temp = arr[size - 1]; 
    
    // Shift elements to the right from end to start
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Put the last element at the front
    arr[0] = temp;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before right rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    rotateRightByOne(arr, size);
    
    printf("\nAfter right rotation:  ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}