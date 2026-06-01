#include<stdio.h>
int main(){
    int k=5;
    for(int i=0;i<5;i++){
        for(int j=1;j<=9;j++){
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
