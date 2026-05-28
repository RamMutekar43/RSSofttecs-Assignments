#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Factors of number %d are : ",n);
    while(i<=n){
        if(n%i==0){
            printf("%d ",i);
            i++;
        }else{
            i++;
        }
    }
    return 0;
}