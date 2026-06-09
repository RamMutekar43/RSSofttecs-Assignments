#include<stdio.h>
int main(){

    char str[50];
    printf("Enter string: ");
    scanf("%s",str);

    int i=0;
    while(str[i]!='\0'){
        i++;
    }

    printf("The string length is : %d\n",i);
    
    return 0;
}