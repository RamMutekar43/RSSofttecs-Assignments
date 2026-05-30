#include<stdio.h>
int main(){

    for(int i=5;i>0;i--){
        for(int j=1;j<=5;j++){
            if(j<i){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}