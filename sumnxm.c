#include <stdio.h>
int main (){
    int n ,m;
printf("Enter the no of rows");
scanf("%d",&n);
printf("Enter the no of columns ");
scanf("%d",&m);
 int arr[n][m];
 for(int i =0; i<n;i++){
    for(int j =0; j<m; j++){
 printf("Enter the %d row and %d column element of maytrix: ",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
 }
int maxcount =0,count,maxindex=-1; 
for(int i =0; i<n;i++){
    count = 0;
    for(int j =0; j<m; j++){
        if(arr[i][j] == 1)
        count++;
    }

    if (maxcount<count)
    maxcount=count;
    maxindex=i;
}
printf("\n");

        printf("%d is the maximum no of 1 in %d row", maxcount,maxindex);
return 0;
}





