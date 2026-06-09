#include<stdio.h>
int main(){

    char str[]={"Shaam is a good boy."};

    
    int i=0;
    int count=1;
    while(str[i]!='\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }

    printf("Total words in the string is : %d",count);
    
    return 0;
}