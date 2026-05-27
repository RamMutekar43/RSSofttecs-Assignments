// Que - Write a program to check whether given number is divisible by 5 and 7?
// (with && operator and with nested if)

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    // using && operator 
    if(num%5==0 && num%7==0){
        printf("Number is divisible by 5 and 7.");
    }else{
        printf("Number is not divisible by 5 and 7.");
    }

    printf("\n");

    // using && operator 
    if(num%5==0){
        if(num%7==0){
            printf("Number is divisible by 5 and 7.");
        }
    }else{
        printf("Number is not divisible by 5 and 7.");
    }


    return 0;
}