// Que -  Accept a character from the keyboard and display its previous and next character in order.

#include<stdio.h>
int main(){
    // Variable declaration and user input
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);

    // print outputs (ascii values are used to find prev and next character)
    printf("The character is %c\n",ch);
    printf("The previous character is %c\n",ch-1);
    printf("The next character is %c",ch+1);

    return 0;
}