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

    int lrg=arr[0], sLrg;
    

    for(int i=1;i<n;i++){
        if(arr[i]>lrg){
            sLrg=lrg;
            lrg=arr[i];
        }
    }
    
    printf("The 2nd largest elements in the array is : %d \n",sLrg);
    return 0;
}