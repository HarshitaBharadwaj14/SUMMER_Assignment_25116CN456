#include<stdio.h>
int main (){
    int arr[5],brr[5],found=0;
    for (int i =0;i<=4;i++){
        printf("Enter the %d element ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i =0;i<=4;i++){
        brr[i]=arr[4-i];
}
for (int i =0;i<=4;i++){
if(brr[i]==arr[i]){
    found =1;
}
else if (brr[i]!= arr[i]){
    found =0;
}
}
if(found ==1){
    printf("the given array is palindrome ");
}
else if ( found ==0 ){
 printf("the given array is not palindrome");
}
return 0;
}