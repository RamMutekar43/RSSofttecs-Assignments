#include<stdio.h>
int main(){
    int sum = 0;

    for(int i=100;i<=200;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("Sum of even numbers from 100 to 200 is : %d ",sum);
    return 0;
}