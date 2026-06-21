#include <stdio.h>
int main() {
    int arr[100], size ,i,searchelement, found =0;
   printf("Enter the number of elements in the array:");
   scanf("%d", &size);
   printf("enter %d elements :\n",size);
    for(i =0; i< size ; i++)
{
    scanf("%d", &arr[i]);

}
printf("enter the elements to search :");
scanf("%d", &searchelement);
for( i =0;i <size ;i++ ) {
    if(arr[i] == searchelement){
        printf("element found at index %d (position %d)\n", i,i+1);
            found = 1;
            break;
            
    }
    if(found ==0){
        printf("element not found in the array .\n");
            
    }
return 0;
}
}