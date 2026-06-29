#include <stdio.h>

int main() {
    int arr[100], n, i, target, low, high, mid, found = 0;

    printf("Enter number of elements (Must be in sorted order): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Binary Search Algorithm
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d.\n", mid);
            found = 1;
            break; // Exit loop if item is found
        } 
        else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        } 
        else {
            high = mid - 1; // Target is in the left half
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}