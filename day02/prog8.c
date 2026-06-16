#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    int temp = (num < 0) ? -num : num; // Palindromes usually considered for positive
    
    while(temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }
    
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
        
    return 0;
}