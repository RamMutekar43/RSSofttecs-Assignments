#include<stdio.h>
int main(){
    int num1, num2;
    char optr;

    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c",&optr);

    switch(optr){
        case '+' :
        printf("%d + %d = %d",num1,num2, num1+num2);
        break;

        case '-' :
        printf("%d - %d = %d",num1,num2, num1-num2);
        break;

        case '*' :
        printf("%d * %d = %d",num1,num2, (num1*num2));
        break;

        case '/' :
        printf("%d + %d = %d",num1,num2, (num1/num2));
        break;
        
        default :
        printf("Enter valid operator.");
        return 0;

    }

    return 0;
}  