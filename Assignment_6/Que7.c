#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            count++;
        }
    }

    printf("Total number of odd elements in the array is : %d ",count);
    return 0;
}