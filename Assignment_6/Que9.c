#include<stdio.h>
int main(){
    int n,key;

    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter number to be searched: ");
    scanf("%d",&key);
    
    int i=0;
    while(i<n){
        if(arr[i]==key){
            printf("Number %d is at index %d .",key,i);
            break;
        }else{
            i++;
        }
    }

    if(i==n){
        printf("Number is not present in the array.");
    }
    
    return 0;
}