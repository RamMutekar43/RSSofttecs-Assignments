#include<stdio.h>
int main(){

    char str[50];
    printf("Enter string: ");
    scanf("%s",str);

    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            if((str[i]!='a' && str[i]!='A' && 
                str[i]!='e' && str[i]!='E' && 
                str[i]!='i' && str[i]!='I' && 
                str[i]!='o' && str[i]!='O' && 
                str[i]!='u' && str[i]!='U' )){
                count++;
            }
        }
        
        i++;
    }

    printf("Total consonants in the string is : %d",count);
    
    return 0;
}