#include<stdio.h>
int main(){
    int n, nn=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    int temp=n;
    while(n>0){
        nn = (nn*10) + (n%10);
        n/=10;
    }

    if(nn==temp){
        printf("%d is a palindrome number.",temp);
    }else{
        printf("%d is not a palindrome number.",temp);
    }

    return 0;
}