#include <stdio.h>

int main() {
    int num, product = 1, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int temp = (num < 0) ? -num : num;
    
    // Special case for input 0
    if (temp == 0) product = 0;
    
    while(temp != 0) {
        remainder = temp % 10;
        product *= remainder;
        temp /= 10;
    }
    printf("Product of digits: %d\n", product);
    return 0;
}