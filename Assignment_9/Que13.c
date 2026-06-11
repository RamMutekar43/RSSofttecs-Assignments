#include<stdio.h>

struct account{
    int accno;
    char name[50];
    float balance;
}a1;

int main(){

    float deposit,withdraw;

    printf("Enter Account Number: ");
    scanf("%d",&a1.accno);

    printf("Enter Account Holder Name: ");
    scanf("%s",a1.name);

    printf("Enter Balance: ");
    scanf("%f",&a1.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f",&deposit);

    a1.balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f",&withdraw);

    a1.balance -= withdraw;

    printf("\nAccount Number : %d",a1.accno);
    printf("\nAccount Holder : %s",a1.name);
    printf("\nCurrent Balance : %.2f",a1.balance);

    return 0;
}