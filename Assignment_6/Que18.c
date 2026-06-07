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

    for(int i=0;i<n;i++){
        int temp;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }

    int temp = arr[0];
    int x=1;

    printf("Array after removal of duplicate: ");
    while(x<=n){
        if(arr[x]!=arr[x+1] && arr[x]!=temp){
            printf("%d ",temp);
            temp=arr[x];
            x++;
        }else{
            x++;
        }
    }
    
    return 0;
}