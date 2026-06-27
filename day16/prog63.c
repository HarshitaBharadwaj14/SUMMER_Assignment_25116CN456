#include <stdio.h>

int main() {
    int arr[] = {2, 4, 3, 5, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target_sum = 7;
    int found = 0;

    printf("Pairs with sum %d are:\n", target_sum);
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs found with the given sum.\n");
    }

    return 0;
}