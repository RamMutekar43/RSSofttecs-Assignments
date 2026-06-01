#include<stdio.h>
int main(){
    int k=3;
    for(int i=2;i>=0;i--){
        for(int j=1;j<=5;j++){
            if(j>=k-i && j<=k+i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
