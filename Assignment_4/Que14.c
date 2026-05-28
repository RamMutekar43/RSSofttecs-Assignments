#include<stdio.h>
int main(){
    int start, end;

    printf("Enter starting number and ending number: ");
    scanf("%d%d", &start,&end);
    
    printf("Even numbers from %d to %d are : ",start,end);
    for(int i=start;i<=end;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }

    return 0;
}