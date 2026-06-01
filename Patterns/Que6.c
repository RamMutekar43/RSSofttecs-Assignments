#include<stdio.h>
int main(){
    int k=0;
    int z=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j==3 && i<=3){
                printf("%d ",++k);

            }else if(j==3 && i>3){
                printf("%d ",--k);

            }else if(i==3 && j<3){
                printf("%d ",z++);

            }else if(i==3 && j>3){
                printf("%d ",--z);

            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
