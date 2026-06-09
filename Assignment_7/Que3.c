#include<stdio.h>
int main(){

    char str[50];
    printf("Enter string: ");
    scanf("%s",str);

    int i=0;
    int count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }

    printf("The total number of characters in the string is : %d\n",count);
    
    return 0;
}