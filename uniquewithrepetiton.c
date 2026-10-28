#include<stdio.h>
#include<stdbool.h>
int main (){
    int arr[5];
     bool flag = false;
    for (int i = 0 ; i <=4;i++){
printf("Enter the %d element of array", i +1);
scanf("%d", &arr[i]);
    }
     for (int i = 0 ; i <5;i++){
        bool flag=false;
        for(int j =0; j<5;j++){
            if(i!=j && arr[i]==arr[j]){
          flag = true;
        break ;
        }
    }
    
    if(flag == false){
        printf("%d is the unique number ", arr[i]);
        break;
    
}
     }
    return 0;
}