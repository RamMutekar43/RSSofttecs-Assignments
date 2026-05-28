#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        int n=i;
        for(int j=1;j<=5;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}