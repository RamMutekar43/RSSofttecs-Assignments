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

    int arr1[n];
    
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}