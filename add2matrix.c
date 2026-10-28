#include<stdio.h>
int main(){
    int arr[2][2],brr[2][2],crr[2][2];
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
             printf("enter the %d row and %d column value", i+1,j+1);
             scanf("%d",&arr[i][j]);
        }
    }
     for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
             printf("enter the %d row and %d column value", i+1,j+1);
             scanf("%d",&brr[i][j]);
        }
    }
    
     for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
             printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
        return 0;
    }