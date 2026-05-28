#include<stdio.h>
int main(){
    int n, ev=0, od=0, z=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("In %d \n",n);
    while(n>0){
        if((n%10)==0){
            z++;
        }else if((n%10)%2==0){
            ev++;
        }else{
            od++;
        }
        n/=10;
    }

    printf("Even digits are : %d \n",ev);
    printf("Odd digits are : %d \n",od);
    printf("Zero digits are : %d \n",z);

    return 0;
}