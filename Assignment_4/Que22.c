#include<stdio.h>
int main(){
    int n ,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("The total number of digits in %d are: ",n);
    while(n>0){
        n/=10;
        count++;
    }

    printf("%d",count);

    return 0;
}