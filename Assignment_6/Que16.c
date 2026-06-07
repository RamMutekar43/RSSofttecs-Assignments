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

    for(int i=0;i<n;i++){
        if(vis[i]) continue;

        int count=0;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                vis[j]=1;
                count++;
            }
        }
        printf("%d : %d\n",arr[i],count);
    }
    
    return 0;
}