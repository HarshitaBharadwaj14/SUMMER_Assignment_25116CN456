#include <stdio.h>
int main(){
    int arr[5],x,count=0;
    printf("Enter the value of x");
    scanf("%d",&x);
    for(int i =0; i<5; i++){
        printf("Enter the %d element\n",i+1);
        scanf("%d", &arr[i]);
    }
    
     for(int i =0; i<5; i++){
        if(arr[i]>x) {
            count++;
        }
    }
    printf("%d are the numbers greater than %d",count,x);
    return 0;
}