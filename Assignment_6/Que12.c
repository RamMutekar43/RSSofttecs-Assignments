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

    int sml=arr[0],sSml;

    for(int i=1;i<n;i++){
        if(arr[i]<sml){
            sSml=sml;
            sml=arr[i];
        }
    }
    
    printf("The 2nd smallest elements in the array is : %d \n",sSml);
    return 0;
}