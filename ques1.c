#include<stdio.h>
int main(){
    int nums[5],target,sum=0;
    for(int i =0;i<5;i++){
    printf("Enter the %d element\n",i+1);
    scanf("%d",&nums[i]);
    }

    printf("Enter the value of target");
    scanf("%d",&target);
    for(int i =0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if( nums[i]+nums[j]==target){
                printf("[%d %d]",i,j);
            }
            else
        printf("No such pair exists");
    }
     
}
}
