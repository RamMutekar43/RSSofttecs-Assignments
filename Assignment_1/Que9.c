#include<stdio.h>
int main(){
    int amount,tens, fives, ones;
    printf("Enter Amount: ");
    scanf("%d",&amount);

    tens = amount/10;
    amount%=10;
    fives = amount/5;
    amount%=5;
    ones = amount/1;

    printf("The number of notes the cashier should give are\n 10 = %d\n 5 = %d\n 1 = %d\n",tens,fives,ones);
    return 0;
}