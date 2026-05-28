#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("The digits in %d are: ",n);
    while(n>0){
        printf("'%d' ",n%10);
        n/=10;
    }

    return 0;
}