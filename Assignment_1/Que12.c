#include<stdio.h>
int main(){
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);

    printf("The character is %c\n",ch);
    printf("The previous character is %c\n",ch-1);
    printf("The next character is %c",ch+1);

    return 0;
}