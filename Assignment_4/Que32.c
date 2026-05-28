#include<stdio.h>
int main(){
    int n, i=1, sum=0, count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("For the number %d\n",n);
    while(i<=n){
        if(n%i==0){
            sum+=i;
            count++;
            i++;
        }else{
            i++;
        }
    }
    printf("Sum of all the factors is: %d \n",sum);
    printf("Total number of factors is: %d ",count);
    return 0;
}