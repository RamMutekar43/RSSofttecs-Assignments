#include<stdio.h>
int main(){
    int n,m;
    printf("Enter size of the 1st array: ");
    scanf("%d",&n);

    int arr1[n];
    printf("Enter 1st array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter size of the 2nd array: ");
    scanf("%d",&m);

    int arr2[m];
    printf("Enter 2nd array elements: ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }

    int arr[n+m];
    int temp=0;
    for(int i=0;i<n+m;i++){
        if(i<n){
            arr[i]=arr1[i];
        }else{
            arr[i]=arr2[temp++];
        }
    }

    for(int i=0;i<n+m;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}