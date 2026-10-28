#include<stdio.h>
int main (){
     int arr[7], pair=0,x;
     printf("Enter the value of x");
     scanf("%d",&x); 
    for(int i =0; i<7; i++){
        printf("Enter the %d element\n",i+1);
        scanf("%d", &arr[i]);
}
for(int i =0; i<7; i++){
    for (int j =i+1; j<7; j++){
        if(arr[i]+arr[j] == x)
        pair++;
        }
    }
printf("the total no of pairs are %d", pair);
return 0;
}