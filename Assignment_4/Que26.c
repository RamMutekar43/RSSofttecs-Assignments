#include<stdio.h>
int main(){
    int n , nn=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    printf("The reverse of %d is: ",n);
    while(n>0){
        nn = (nn*10) + (n%10);
        n/=10;
    }
    printf("%d",nn);


    return 0;
}