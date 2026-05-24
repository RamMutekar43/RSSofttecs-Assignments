#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    // using if-else statement
    if(num%2==0){
        printf("Even Number");
    }else{
        printf("Odd Number");
    }

    printf("\n");
    // using ternary operator
    (num%2==0)?printf("Even Number"):printf("Odd Number");

    return 0;
}