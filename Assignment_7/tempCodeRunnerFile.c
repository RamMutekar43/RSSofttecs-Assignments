#include<stdio.h>
int main(){

    char str[]={"Shaam is a good boy."};
    // printf("Enter string: ");
    // for(int i=0;i<n;i++){
    //     scanf("%c",&str[i]);
    // }

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