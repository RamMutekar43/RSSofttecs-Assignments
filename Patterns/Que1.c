#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        int k=1;
        for(int j=1;j<=6;j++){
            if(j%2==0){
                printf("%d ",k);
                k++;
            }else{
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}
