// Que - Write a program to check whether given number is divisible by 5 or 7?
// (with || operator and with else if)

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    // using || operator 
    if(num%5==0 || num%7==0){
        printf("Number is divisible.");
    }else{
        printf("Number is not divisible.");
    }
    
    printf("\n");
    
    // using else if
    if(num%5==0){
        printf("Number is divisible.");
    }else if(num%7==0){
        printf("Number is divisible.");
    }else{
        printf("Number is not divisible.");
    }

    return 0;
}