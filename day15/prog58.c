#include <stdio.h>
void rotateleftbyone(int arr[], int size ){
    if (size <= 1) return ;
    int temp = arr[0];
    
    for (int i = 0; i <size -1; i++){
        arr[i] = arr[i+1];

    }
    arr[size -1] = temp;
}

int main() {
    int arr[100] ={ 10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("before left rotation:");
    for (int i=0; i<size; i++) {
        printf("%d", arr[i]);

    }
    rotateleftbyone(arr,size);

printf("\nafter left rotation: ");
for (int i=0; i<size; i++) {
    printf("%d", arr[i]);

}
printf("\n");
return 0;

    

}
 