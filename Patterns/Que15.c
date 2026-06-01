#include<stdio.h>
int main(){
    int k=5;

    for(int i=5;i>0;i--){
        for(int j=1;j<=5;j++){
            if(j<i){
                printf("%d ",j);
            }else{
                printf("%d ",k);
            }
        }
        printf("\n");
        k--;
    }
    return 0;
}