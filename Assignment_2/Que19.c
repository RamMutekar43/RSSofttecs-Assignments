#include<stdio.h>
int main(){
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);    
    
    if(ch>=65 && ch<=90){
        printf("Character '%c' in lower case is '%c'",ch,ch+32);
    }else{
        printf("Character '%c' in upper case is '%c'",ch,ch-32);
    }

    return 0;
}