#include<stdio.h>
int main(){

    char str[50];
    printf("Enter string: ");
    scanf("%s",str);

    int i=0;
    int count=0;
    while(str[i]!='\0'){
        char vowel[]={"aeiouAEIOU"};
        for(int j=0;j<10;j++){
            if(str[i]==vowel[j]){
                count++;
            }
        }
        
        i++;
    }

    printf("Total vowels in the string is : %d",count);
    
    return 0;
}