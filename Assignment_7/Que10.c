#include<stdio.h>
#include<string.h>
int main(){

    char str[50];
    printf("Enter string: ");
    scanf("%s",str);

    int r=strlen(str)-1,l=0;

    char temp;

    while(l<r){
        temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }

    printf("The string is : %s\n",str);
    
    return 0;
}