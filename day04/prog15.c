#include <stdio.h>
int main() {
    int n, s=0, d,temp;
    printf(" enter a three digit number: ");
    scanf("%d", &n);
        temp =n;
        while(n>0)
        {
            d = n%10;
            s = s+d*d*d;
            n = n/10;
        
    }
    if(temp ==s)
    printf("%d is  an armstromg number ",temp);
    else
    printf("%d is not an armstrong number ",temp);
    return 0;

}