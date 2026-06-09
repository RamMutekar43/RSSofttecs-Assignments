#include<stdio.h>
int main(){

    char str[50];
    printf("Enter string: ");
    scanf("%s",str);

    int i=0;
    while(str[i]!='\0'){
        if(str[i]>=65 && str[i]<=90){
            str[i]+=32;
        }
        
        i++;
    }

    printf("Uppercase String is : %s",str);
    
    return 0;
}