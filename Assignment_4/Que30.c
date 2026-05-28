#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Sum of all the factors of the number %d is : ",n);
    while(i<=n){
        if(n%i==0){
            sum+=i;
            i++;
        }else{
            i++;
        }
    }
    printf("%d ",sum);
    return 0;
}