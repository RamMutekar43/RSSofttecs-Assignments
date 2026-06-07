#include<stdio.h>
int main(){
    int n, po=0, ne=0,z=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            z++;
        }else if(arr[i]>0){
            po++;
        }else{
            ne++;
        }
    }

    printf("Total number of Positive, Negative and Zero Elements in the array are :\n ");
    printf("Positive: %d\n",po);
    printf("Negative: %d\n",ne);
    printf("Zero: %d\n",z);
    return 0;
}