// Que -  A cashier has currency notes of denomination 1, 5 and 10. 
// Accept the amount to be withdrawn from the user and 
// print the total number of currency notes of each denomination 
// the cashier will have to give.

#include<stdio.h>
int main(){
    // Variable declaration and user inputs
    int amount,tens, fives, ones;
    printf("Enter Amount: ");
    scanf("%d",&amount);

    // calculating number of notes 
    tens = amount/10;
    amount%=10;
    fives = amount/5;
    amount%=5;
    ones = amount/1;

    // print output
    printf("The number of notes the cashier should give are\n 10 = %d\n 5 = %d\n 1 = %d\n",tens,fives,ones);
    return 0;
}