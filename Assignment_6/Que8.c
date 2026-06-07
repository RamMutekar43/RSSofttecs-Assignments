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

    int temp,l=0,r=n-1;

    while(l<r){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}