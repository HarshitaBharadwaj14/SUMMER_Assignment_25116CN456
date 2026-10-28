#include<stdio.h>
int main (){
    int r ,c;
    printf("Enter the no of rows\n");
    scanf("%d",&r);
    printf("enter the no of coulumn");
    scanf("%d",&c);

int arr[r][c];
for(int i =0;i<r;i++){
    for(int j=0; j<c;j++){
printf("Enter the %d row and %d column :",i+1,j+1);
scanf("%d",&arr[i][j]);
    }
}
for(int i =0;i<r;i++){
    for(int j=0; j<c;j++){
printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("\n");
int brr[c][r];
for(int i =0;i<r;i++){
    for(int j=0; j<c;j++){
        brr[j][i]=arr[i][j];
    }
}
for(int i =0;i<c;i++){
    for(int j=0; j<r;j++){
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}
return 0;
}


 



