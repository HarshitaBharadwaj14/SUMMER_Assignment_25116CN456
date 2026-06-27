#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max_element = arr[0];
    int max_count = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // Update max if current element's frequency is higher
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }

    printf("Element with maximum frequency is %d (appears %d times)\n", max_element, max_count);

    return 0;
}