#include<stdio.h>
int main(){
    int n;
    
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int sml=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<sml){
            sml=arr[i];
        }
    }
    
    printf("The smallest elements in the array is : %d \n",sml);
    return 0;
}