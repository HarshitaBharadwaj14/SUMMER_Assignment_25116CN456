#include <stdio.h>

int main() {
    int low, high, i, temp, rem, sum;

    printf("Enter lower limit and upper limit: ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);

    for (i = low; i <= high; ++i) {
        temp = i;
        sum = 0;

        // Check if the current number 'i' is an Armstrong number
        while (temp != 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (i == sum) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}