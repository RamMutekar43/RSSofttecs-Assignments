#include<stdio.h>
int main(){
    int sub[5] = {10,20,30,40,50};

    for(int i=0;i<=4;i++){
        if(i<=4){
            sub[i]=i*i;
        }
        printf("%d ",sub[i]);
    }
    return 0;
}