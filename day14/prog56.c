#include <stdio.h>

int main() {
    int arr[100], size, i, j, isDuplicate;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are: ");
    isDuplicate = 0;

    // Logic to find duplicates
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                // To avoid printing the same duplicate value multiple times,
                // we can print it and break. 
                printf("%d ", arr[i]);
                isDuplicate = 1;
                break; 
            }
        }
    }

    if(isDuplicate == 0) {
        printf("None");
    }
    printf("\n");

    return 0;
}