#include <stdio.h>
int main(){
    int arr[7], evensum=0, oddsum=0, result;
    for(int i =0; i<7; i++){
        printf("Enter the %d element\n",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i =0; i<7; i++){
        if (i % 2 == 0){
            evensum=evensum+arr[i];
        }
        else oddsum=oddsum+arr[i];
    }

        result=(evensum - oddsum);
printf("the difference between the sum of elements of odd and even indices is %d", result);
return 0;
}