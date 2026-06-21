#include <stdio.h>

int main() {
    int arr[100], size, i;
    int largest, secondLargest;

    printf("Enter the size of the array (Minimum 2): ");
    scanf("%d", &size);

    if(size < 2) {
        printf("Invalid size! Array must have at least 2 elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    if(arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Logic to find second largest
    for(i = 2; i < size; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("The largest element is: %d\n", largest);
    printf("The second largest element is: %d\n", secondLargest);

    return 0;
