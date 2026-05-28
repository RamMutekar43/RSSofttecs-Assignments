#include<stdio.h>
int main(){
    int n;
    
    printf("How many times you want to print: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Hello ");
    }
    return 0;
}