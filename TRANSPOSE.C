#include<stdio.h>
int main (){
    int n;
    printf("Enter the no of columns and row of a matrix");
    scanf("%d",&n);
    int arr[n][n];
    for(int i =0; i<n; i++){
        for (int j =0; j<n; j++){
            printf("Enter the %d row and %d column element of a matrix: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
}    
 
    for(int i =0; i<n; i++){
        for(int j =0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("\n");

    for(int i =0; i<n; i++){
        for (int j =0; j<n; j++){

            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}