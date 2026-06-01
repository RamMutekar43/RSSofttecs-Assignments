#include<stdio.h>
int main(){

    for(int i=7;i>=1;i-=3){
        int k=i;
        for(int j=1;j<=3;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
