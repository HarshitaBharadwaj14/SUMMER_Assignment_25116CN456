#include<stdio.h>
int main (){
    int arr[5],count=0, duplicate =0;
    for (int i = 0 ; i <=4;i++){
printf("Enter the %d element of array", i +1);
scanf("%d", &arr[i]);
    }
     for (int i = 0 ; i <4;i++){
        for(int j =i+1; j<5;j++){
            if(arr[i]==arr[j])
          count =1;
          duplicate= arr[i];
        break;
        }
    
    if(count ==1){
        break;
    }
}
    if(count == 1){
    printf("the duplicate element if %d", duplicate);
    }
    else printf("no duplicate element");
    return 0;
}