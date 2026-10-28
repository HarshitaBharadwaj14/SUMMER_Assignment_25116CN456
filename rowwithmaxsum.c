#include<stdio.h>
int main(){
    int arr[3][3],sum[3]={0};
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
    printf("Enter the %d  row and %d column value", i+1,j+1);
    scanf("%d",&arr[i][j]);
        }
    }
     for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
        sum[i] += arr[i][j];
        }
    }
    int maxsum=sum[0];
   int maxrow=0;
     for(int i =0;i<3;i++){
        if(sum[i] >maxsum)
        maxsum =sum[i];
        maxrow=i;
     }
printf("the maximum sum is %d with %d row",maxsum,maxrow+1);
     return 0;
}