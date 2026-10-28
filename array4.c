#include <stdio.h>
int main(){
    int arr[5],min;
    for(int i =0; i<5; i++){
        printf("Enter the %d element\n",i+1);
        scanf("%d", &arr[i]);
    }
    min=arr[0];
     for(int i =0; i<5; i++){
        if(arr[i]< min) {
            min = arr[i];
        }
    }
        printf("%d is te minimum value out of all the elements", min);

return 0;
}