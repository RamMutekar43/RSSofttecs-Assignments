#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Lowercase Character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("Character is a vowel.");
    }else{
        printf("Character is a consonant.");
    }

    return 0;
}