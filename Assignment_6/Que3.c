#include<stdio.h>
int main(){
    int n;
    float sum=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    printf("Average of all elements in the array is : %f \n",sum/n);
    return 0;
}