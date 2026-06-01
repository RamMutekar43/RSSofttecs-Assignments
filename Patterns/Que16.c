#include<stdio.h>
int main(){
    int z=5;

    for(int i=1;i<=9;i++){
        for(int j=1;j<=z;j++){
            printf("%d ",j);
        }
        if(i<5){
            z--;
        }else{
            z++;
        }
        printf("\n");
    }
    return 0;
}