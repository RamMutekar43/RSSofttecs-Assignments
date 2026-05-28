#include<stdio.h>
int main(){
    int n, sum1=0, sum2=0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    // Using loop
    for(int i=1;i<=n;i++){
        sum1+=i;
    }
    printf("Sum using loop: %d \n",sum1);

    // without using loop
    sum2 = n*(n+1)/2;
    printf("Sum without using loop: %d ",sum2);
    return 0;
}