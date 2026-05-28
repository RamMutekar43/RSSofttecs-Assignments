#include<stdio.h>
int main(){
    int start, end;

    printf("Enter starting number and ending number: ");
    scanf("%d%d", &start,&end);
    printf("\n");

    for(int i=start;i<=end ;i++){
        printf("%d ",i);
    }
    return 0;
}