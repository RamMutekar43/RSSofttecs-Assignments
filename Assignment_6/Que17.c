#include<stdio.h>
int main(){
    int n;
    
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n], vis[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        vis[i]=0;
    }

    printf("Unique elements in the array are: ");
    for(int i=0;i<n;i++){
        if(vis[i]) continue;

        int count=0;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                vis[j]=1;
                count++;
            }
        }

        if(count==1){
            printf("%d ",arr[i]);
        }
    }
    
    return 0;
}