#include <stdio.h>
int primenum(int n ){
    if (n <= 1){
        return 0;
    }
    for (int i= 2; i<= n/2; i++){
        if (n % i == 0){
            return 0;

        }
    }
    return 1;

}
int main (){
    int num ;
    printf("enter a positive number");
    scanf("%d", &num);
    if(primenum(num)){
        printf("%d is a prime number", num);
    }
    else{
        printf("%d is not a prime number",num);

    }
    return 0;
}