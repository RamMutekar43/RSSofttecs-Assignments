// Que -  Accept a character from the user and display its ASCII value.

#include<stdio.h>
int main(){
    // Variable declaration and user input
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);

    // print output
    printf("The ASCII value of the character is %d",ch);

    return 0;
}