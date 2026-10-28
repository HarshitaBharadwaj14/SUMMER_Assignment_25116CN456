#include <stdio.h>
int main(){
    int arr[5], sum =0,arraysum =(5*(5+1))/2, missingelement;
    for(int i=0;i<=4;i++){
        printf("Enter the %d elements of array \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i =0; i<=4; i++) {
        sum = sum+arr[i];
    }
            missingelement = arraysum-sum;
        printf("the missing element is %d",missingelement);
    
            return 0;
        }
        

    

