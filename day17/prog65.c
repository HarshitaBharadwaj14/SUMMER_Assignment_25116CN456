#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6, 7};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2; // Size of the merged array
    
    int arr3[n3];

    // Copy elements from the first array
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}