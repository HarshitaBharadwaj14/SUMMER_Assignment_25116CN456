#include <stdio.h>
int main(){
    int arr[5];
   int checklist[7]={0};//ceate a checklist for number 1 to 6 initialised to 0
   // to get elements and marked them on checklist 

    for(int i=0;i<=4;i++){
        printf("Enter the %d elements of array \n",i+1);
        scanf("%d",&arr[i]);

        //if the entered element is with in our range or not (1 to 6)
        if( arr[i]>=1 && arr[i]<=6){
            checklist[arr[i]] =1;
        }   
     }
    printf(" missing elements :");
    for(int i = 1;i <=6; i++){
        if (checklist[arr[i]]==0){
            printf("%d\n", i);

        }
    }
        return 0;
}