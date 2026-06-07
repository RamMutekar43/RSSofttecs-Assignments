#include<stdio.h>
int main(){
    int n,key,count=0;

    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter number to be counted: ");
    scanf("%d",&key);
    
    int i=0;
    while(i<n){
        if(arr[i]==key){
            count++;
            i++;
        }else{
            i++;
        }
    }

    printf("The count of %d in the array is : %d ",key,count);
    
    return 0;
}