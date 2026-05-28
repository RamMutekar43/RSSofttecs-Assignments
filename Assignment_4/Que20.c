#include<stdio.h>
int main(){
    int n ,pow,comp=1;
    printf("Enter the number and it's power: ");
    scanf("%d%d",&n,&pow);

    for(int i=0;i<pow;i++){
        comp*=n;
    }
    printf("%d to the power %d is: %d",n,pow,comp);
    return 0;
}