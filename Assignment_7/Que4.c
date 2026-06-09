#include<stdio.h>
int main(){

    char str[50];
    printf("Enter string: ");
    scanf("%s",str);

    int i=0;
    int dig=0,alp=0,sCh=0;
    while(str[i]!='\0'){
        if(str[i]>=48 && str[i]<=57){
            dig++;
        }else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            alp++;
        }else{
            sCh++;
        }
        i++;
    }

    printf(" String contains\n digits : %d\n alphabets : %d\n special characters : %d ",dig,alp,sCh);
    
    return 0;
}