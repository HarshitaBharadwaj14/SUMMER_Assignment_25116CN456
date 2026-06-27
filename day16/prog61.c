#include <stdio.h>

int main() {
    // Array of size 4 containing numbers from 1 to 5 (one is missing)
    int arr[] = {1, 2, 4, 5}; 
    int n = 5; // The range of numbers (1 to n)
    int total_sum = (n * (n + 1)) / 2;
    int array_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        array_sum += arr[i];
    }

    int missing_number = total_sum - array_sum;
    printf("The missing number is: %d\n", missing_number);

    return 0;
}