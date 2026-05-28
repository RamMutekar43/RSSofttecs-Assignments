#include<stdio.h>
int main(){
    int n;
    
    printf("How many times you want to print: ");
    scanf("%d", &n);

    for(int i=1;i<=n ;i++){
        printf("%d ",i);
    }
    return 0;
}