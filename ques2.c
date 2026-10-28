#include <stdio.h>
float findmax(float a, float b){
    if (a > b){ 
     return a;
    }
   else {
        return b;
    }
}

int main(){
    float num1, num2 ,max;
    printf(" Enter two numbers :");
    scanf("%f %f", &num1, &num2 );
    max = findmax(num1 , num2);
    printf("the maximum number is %f",max);
    return 0;
}
