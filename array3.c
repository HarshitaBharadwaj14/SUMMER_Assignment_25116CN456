#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    for(int i =0; i < size;i++){
        printf("Enetr the elements of array\n");
        scanf("%d",&arr[i]);
    }
    for(int i =0; i< size; i++){
        if (i%2 !=0){
            arr[i]= arr[i]*2;
        }
        else {
        arr[i]=arr[i]+10; 
    }

    for(int i =0; i< size; i++){
    printf("%d ",arr[i]);
}
return 0;
}
}