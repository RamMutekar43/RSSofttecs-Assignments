#include<stdio.h>
int main(){
    int k=5;
    for(int i=0;i<9;i++){
        int j=1;
        while(j<=9){
            if(i<=4){
                if(j>=k-i && j<=k+i){
                    printf("* ");
                    j++;
                }else{
                    printf("  ");
                    j++;
                }
            }else{
                if(j>=k-i && j<=k+i){
                    printf("* ");
                    j++;
                }else{
                    printf("  ");
                    j++;
                }
            }

        }
        printf("\n");
    }
    return 0;
}
