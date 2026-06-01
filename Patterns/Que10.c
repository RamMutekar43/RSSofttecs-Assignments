#include<stdio.h>
int main(){
    for(int i=65;i<=69;i++){
        int k=i;
        for(int j=1;j<=5;j++){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
