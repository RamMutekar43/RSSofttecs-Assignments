// Que - Write a program to compare two numbers? (==, >, <)

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);    

    printf("Enter the 2nd number: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d is greater than %d",num1,num2);
    }
    if(num1<num2){
        printf("%d is smaller than %d",num1,num2);
    }
    if(num1==num2){
        printf("%d and %d are equal",num1,num2);
    }

    return 0;
}