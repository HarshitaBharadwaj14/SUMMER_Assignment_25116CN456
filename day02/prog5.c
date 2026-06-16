#include <stdio.h>
int main() {
    int lastdigit,num, sum=0;
    printf(" Enter a number:");
    scanf("%d",&num);
    while(num>0){
        lastdigit = num%10;
        num = num/10;
        sum=sum+lastdigit;
    } 
    printf(" the sum of the digit of the given number is %d", sum);
    return 0;

}

