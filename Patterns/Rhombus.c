#include<stdio.h>
int main(){
    int k=5;
    int z=1;
    for(int i=0;i<9;i++){
        int j=1;
        while(j<=9){
            if(i<=4 && j>=k-i && j<=k+i){
                    printf("* ");
                    j++;
            }else if(i>4 && j>=i-k+2 && j<=i+k-z*2){
                    printf("* ");
                    j++;
            }else{
                    printf("  ");
                    j++;
            }

        }

        if(i>4){
            z++;
        }
        printf("\n");
    }
    return 0;
}
