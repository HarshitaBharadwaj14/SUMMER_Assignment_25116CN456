#include<stdio.h>
int main(){
    int arr[5][5];
    for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){ 
           printf("enter 10 in %d row and %d column: \t\n", i+1,j+1);
              scanf("%d",&arr[i][j]);
              
        }
    }
     printf("\n");
     for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
            printf("\n");
        
    }
            return 0;
        }