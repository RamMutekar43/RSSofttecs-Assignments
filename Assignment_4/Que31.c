#include<stdio.h>
int main(){
    int n, i=1, count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Total number of factors of the number %d is : ",n);
    while(i<=n){
        if(n%i==0){
            count++;
            i++;
        }else{
            i++;
        }
    }
    printf("%d ",count);
    return 0;
}