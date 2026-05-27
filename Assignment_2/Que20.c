// Que - Write a program to check whether given character is a digit or a character in lowercase or uppercase alphabet.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter any alphabet (A-Z or a-z) or any number between (0-9): ");
    scanf("%c",&ch);    
    
    if(ch>=65 && ch<=90){
        printf("Character '%c' is upper case alphabet.",ch);
    }else if(ch>=97 && ch<=122){
        printf("Character '%c' is lower case alphabet.",ch);
    }else{
        printf("Character '%c' is a number.",ch);
    }

    return 0;
}