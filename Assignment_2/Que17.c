#include<stdio.h>
int main(){
    int q1,q2,q3,r1,r2,r3;
    printf("Enter the 1st item quantity and rate: ");
    scanf("%d%d",&q1,&r1);    

    printf("Enter the 2nd item quantity and rate: ");
    scanf("%d%d",&q2,&r2); 

    printf("Enter the 3rd item quantity and rate: ");
    scanf("%d%d",&q3,&r3); 

    int amount = q1*r1 + q2*r2 + q3*r3;

    printf("Your total amount is %d.\n",amount);
    
    if(amount>15000){
        int discount = amount*20/100;
        printf("You have recieved 20 percent discount on total amount which is %d.",discount);
    }else if(amount<=15000 && amount>10000){
        int discount = amount*15/100;
        printf("You have recieved 20 percent discount on total amount which is %d.",discount);
    }else if(amount<=10000 && amount>7000){
         int discount = amount*8/100;
        printf("You have recieved 20 percent discount on total amount which is %d.",discount);
    }else{
        printf("No discount.");
    }

    return 0;
}