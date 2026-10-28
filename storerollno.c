#include<stdio.h>
int main(){
    int arr[4][2];
    for(int i =0;i<4;i++){
    printf("Enter the rollno of %d student", i+1);
    scanf("%d",&arr[i][0]); //stores roll no in column zero
    
        printf("Enter the marks of %d student", i+1);
    scanf("%d",&arr[i][1]);
    printf("\n");
    }
     printf("rollno\tmarks\n------\t-----\n");
    
     for(int i =0;i<4;i++){
    printf("%d\t%d\n", arr[i][0],arr[i][1]);
}

    return 0;
}