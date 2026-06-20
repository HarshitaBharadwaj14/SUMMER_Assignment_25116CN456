#include <stdio.h>
int findsum(int a,int b){
    return a+b;
}
int main(){
    int num1,num2,sum;
    printf("enter two integers:");
    scanf("%d %d", &num1 , &num2);
    sum = findsum(num1,num2) ;
    printf("the sum of two numbers is %d",sum);
    return 0;
}

